module.exports = grammar({
  name: 'org',

  // this isn't right: both spaces and newlines are significant
  // that is to say '#foo' and '# foo' and '#+foo' must all be parsed differently
  extras: $ => [/\s/],

  inline: $ => [$.text],

  rules: {
    document: $ => seq(
      repeat($.block),
    ),

    // why does this not
    meta: $ => token(seq(
      '#+',
      field('key', /[^:]+/),
      ': ',
      field('value', /.+/),
      '\n'
    )),

    text: $ => seq(/.+/, '\n'),

    comment: $ => /# [^\n]*\n/,

    block: $ => choice(
      $.meta,
      $.code,
      $.line,
    ),

    line: $ => choice(
      $.comment,
      $.text,
    ),

    code: $=> seq(
      choice("#+BEGIN_SRC", "#+begin_src"),
      repeat($.text),
      choice("#+END_SRC", "#+end_src"),
      '\n'
    ),
  }
});
