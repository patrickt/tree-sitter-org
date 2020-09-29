// TODO: we may need a word rule, and text to become repeat(word)

const PREC = {
  EMPHASIS: 1,
  SOURCE_BLOCK: 1,
  BLOCK_START: 1,

  BAREWORD: -1,
}

module.exports = grammar({
  name: 'org',

  // Leaving the spaces up to tree-sitter makes for a bit of a cleaner parser
  // at the cost of some strict standard compliance
  extras: $ => [/\s/],

  rules: {
    document: $ => repeat($.block),

    meta: $ => seq(
      $._poundplus,
      field('key', /[^:\n]+/),
      ': ',
      field('value', /.+/),
      '\n'
    ),

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

    _bareword: $ => token(prec(PREC.BAREWORD, /[A-z#!]+/)),

    bold: $ => seq(
      token(prec(PREC.EMPHASIS, '*')),
      $._bareword,
      token(prec(PREC.EMPHASIS, '*')),
    ),

    _poundplus: $ => token(prec(PREC.BLOCK_START, "#+")),

    code: $=> seq(
      $._poundplus,
      token(prec(PREC.SOURCE_BLOCK, choice("BEGIN_SRC", "begin_src"))),
      field('language', optional(/ [A-z]+/)),
      '\n',
      field('contents', /[^(#\+)]*/),
      $._poundplus,
      token(prec(PREC.SOURCE_BLOCK, choice("END_SRC", "end_src"))),
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
