module.exports = grammar({
  name: 'org',

  extras: $ => [/\s/],

  rules: {
    document: $ => seq(
      repeat($.meta),
      repeat($.block),
    ),

    meta: $ => token(seq(
      '#+',
      field('key', /[^:]+/),
      ': ',
      field('value', /.+/),
      '\n'
    )),

    block: $ => choice(
      $.code,
      $.line,
    ),

    line: $ => choice(
      $.comment,
      $.text,
    ),

    code: $=> seq(
      '#+',
      choice("BEGIN_SRC", "begin_src"),
      repeat($.text),
      choice("END_SRC", "end_src"),
      '\n'
    ),

    text: $ => seq(/.+/, '\n'),

    comment: $ => token(seq(
      '# ',
      /.*/,
      '\n'
    )),
  }
});
