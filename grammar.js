module.exports = grammar({
  name: 'org',

  rules: {
    document: $ => seq(
      repeat($.meta),
      repeat($.line),
    ),

    meta: $ => token(seq(
      '#+',
      field('key', /[^:]+/),
      ': ',
      field('value', /.+/),
      '\n',
    )),

    line: $ => choice(
      $.comment,
      $.text,
    ),

    text: $ => seq(/.+/, '\n'),

    comment: $ => token(seq(
      '# ',
      /.*/,
      '\n'
    )),
  }
});
