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
    meta: $ => seq(
      $._poundplus,
      field('key', /[^:\n]+/),
      ': ',
      field('value', /.+/),
      '\n'
    ),

    // this one is super-general: it might want a negative precedence
    text: $ => seq(/.+/, '\n'),

    comment: $ => /# .*\n/,

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
      $._poundplus,
      choice("BEGIN_SRC", "begin_src"),
      repeat($.text),
      $._poundplus,
      choice("END_SRC", "end_src"),
      '\n'
    ),

    _poundplus: $ => token(prec(1, "#+")),
  }
});
