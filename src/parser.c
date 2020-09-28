#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 11
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 10
#define ALIAS_COUNT 0
#define TOKEN_COUNT 5
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2

enum {
  sym_meta = 1,
  aux_sym_text_token1 = 2,
  anon_sym_LF = 3,
  sym_comment = 4,
  sym_document = 5,
  sym_line = 6,
  sym_text = 7,
  aux_sym_document_repeat1 = 8,
  aux_sym_document_repeat2 = 9,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_meta] = "meta",
  [aux_sym_text_token1] = "text_token1",
  [anon_sym_LF] = "\n",
  [sym_comment] = "comment",
  [sym_document] = "document",
  [sym_line] = "line",
  [sym_text] = "text",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_document_repeat2] = "document_repeat2",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_meta] = sym_meta,
  [aux_sym_text_token1] = aux_sym_text_token1,
  [anon_sym_LF] = anon_sym_LF,
  [sym_comment] = sym_comment,
  [sym_document] = sym_document,
  [sym_line] = sym_line,
  [sym_text] = sym_text,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_document_repeat2] = aux_sym_document_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_meta] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_text_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_line] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_document_repeat2] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(7);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == ':') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 6:
      if (eof) ADVANCE(7);
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_meta);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(4);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(4);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '+') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_meta] = ACTIONS(1),
    [aux_sym_text_token1] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(10),
    [sym_line] = STATE(3),
    [sym_text] = STATE(7),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_document_repeat2] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_meta] = ACTIONS(5),
    [aux_sym_text_token1] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [2] = {
    [sym_line] = STATE(4),
    [sym_text] = STATE(7),
    [aux_sym_document_repeat1] = STATE(6),
    [aux_sym_document_repeat2] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym_meta] = ACTIONS(13),
    [aux_sym_text_token1] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [3] = {
    [sym_line] = STATE(5),
    [sym_text] = STATE(7),
    [aux_sym_document_repeat2] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(11),
    [aux_sym_text_token1] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [4] = {
    [sym_line] = STATE(5),
    [sym_text] = STATE(7),
    [aux_sym_document_repeat2] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(15),
    [aux_sym_text_token1] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [5] = {
    [sym_line] = STATE(5),
    [sym_text] = STATE(7),
    [aux_sym_document_repeat2] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(17),
    [aux_sym_text_token1] = ACTIONS(19),
    [sym_comment] = ACTIONS(22),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      sym_meta,
    STATE(6), 1,
      aux_sym_document_repeat1,
    ACTIONS(30), 2,
      aux_sym_text_token1,
      sym_comment,
  [14] = 2,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    ACTIONS(34), 2,
      aux_sym_text_token1,
      sym_comment,
  [22] = 2,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 2,
      aux_sym_text_token1,
      sym_comment,
  [30] = 1,
    ACTIONS(40), 1,
      anon_sym_LF,
  [34] = 1,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 14,
  [SMALL_STATE(8)] = 22,
  [SMALL_STATE(9)] = 30,
  [SMALL_STATE(10)] = 34,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(9),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(7),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(6),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 2),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 2),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [42] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_org(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .public_symbol_map = ts_symbol_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
