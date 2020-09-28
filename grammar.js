module.exports = grammar({
  name: 'org',

  rules: {
    document: $ => seq(
      repeat($.line),
    ),

    line: $ => choice(
      $.comment,
      $.text,
    ),

    text: $ => seq(/.+/, '\n'),

    comment: $ => token(seq('# ', /.*/, '\n')),
  }
});
