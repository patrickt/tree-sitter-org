module.exports = grammar({
  name: 'org',

  // Leaving the spaces up to tree-sitter makes for a bit of a cleaner parser
  // at the cost of some strict standard compliance
  extras: $ => [/\s/],

  inline: $ => [$.text],

  rules: {
    document: $ => repeat($.block),

    // why does this not
    meta: $ => seq(
      $._poundplus,
      field('key', /[^:\n]+/),
      ': ',
      field('value', /.+/),
      '\n'
    ),

    // this one is super-general: it might want a negative precedence
    text: $ => seq(token(prec(-1, /.+/)), '\n'),

    comment: $ => /# .*\n/,

    block: $ => choice(
      $.meta,
      $.code,
      $.example,
      $.line,
    ),

    line: $ => choice(
      $.comment,
      $.text,
    ),

    _poundplus: $ => token(prec(1, "#+")),

    code: $=> seq(
      $._poundplus,
      choice("BEGIN_SRC", "begin_src"),
      '\n',
      repeat($.text),
      $._poundplus,
      choice("END_SRC", "end_src"),
      '\n'
    ),

    example: $=> seq(
      $._poundplus,
      choice("BEGIN_EXAMPLE", "begin_example"),
      repeat($.text),
      $._poundplus,
      choice("END_EXAMPLE", "end_example"),
      '\n'
    ),

  }
});
