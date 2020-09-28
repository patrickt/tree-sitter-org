// TODO: we may need a word rule, and text to become repeat(word)

module.exports = grammar({
  name: 'org',

  // Leaving the spaces up to tree-sitter makes for a bit of a cleaner parser
  // at the cost of some strict standard compliance
  extras: $ => [/\s/],

  inline: $ => [$.text],

  rules: {
    document: $ => repeat($.block),

    meta: $ => seq(
      $._poundplus,
      field('key', /[^:\n]+/),
      ': ',
      field('value', /.+/),
      '\n'
    ),

    text: $ => seq(token(prec(-1, /.+/)), '\n'),

    comment: $ => /# .*\n/,

    block: $ => choice(
      $.meta,
      $.code,
      $.example,
      $.quote,
      $.verse,
      $.line,
    ),

    line: $ => choice(
      $.comment,
      seq(repeat1($._word), '\n')
    ),

    _word: $ => choice(
      $.bold,
      $._bareword
    ),

    _bareword: $ => token(prec(-1, /[A-z#!]+/)),

    bold: $ => seq(
      token(prec(1, '*')),
      $._bareword,
      token(prec(1, '*')),
    ),

    _poundplus: $ => token(prec(1, "#+")),

    code: $=> seq(
      $._poundplus,
      token(prec(1, choice("BEGIN_SRC", "begin_src"))),
      field('language', optional(/ [A-z]+/)),
      '\n',
      field('contents', /[^(#\+)]*/),
      $._poundplus,
      token(prec(1, choice("END_SRC", "end_src"))),
      '\n'
    ),

    example: $=> seq(
      $._poundplus,
      choice("BEGIN_EXAMPLE", "begin_example"),
      '\n',
      field('contents', /[^(#\+)]*/),
      $._poundplus,
      choice("END_EXAMPLE", "end_example"),
      '\n'
    ),

    quote: $=> seq(
      $._poundplus,
      choice("BEGIN_QUOTE", "begin_quote"),
      '\n',
      field('contents', /[^(#\+)]*/),
      $._poundplus,
      choice("END_QUOTE", "end_quote"),
      '\n'
    ),

    verse: $=> seq(
      $._poundplus,
      choice("BEGIN_VERSE", "begin_verse"),
      '\n',
      field('contents', /[^(#\+)]*/),
      $._poundplus,
      choice("END_VERSE", "end_verse"),
      '\n'
    ),

  }
});
