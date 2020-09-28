module.exports = grammar({
  name: 'org',

  extras: $ => [/[\s\uFEFF\u3000]+/],

  rules: {
    source_file: $ => seq(
      repeat($.comment_line),
      repeat($.block),
    ),

    block: $ => /[A-z]+/,

    comment_line: $ => token(seq('#', /.*/)),
  }
});
