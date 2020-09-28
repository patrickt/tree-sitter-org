#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 22
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 18
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  sym_meta = 1,
  anon_sym_POUND_PLUS = 2,
  anon_sym_BEGIN_SRC = 3,
  anon_sym_begin_src = 4,
  anon_sym_END_SRC = 5,
  anon_sym_end_src = 6,
  anon_sym_LF = 7,
  aux_sym_text_token1 = 8,
  sym_comment = 9,
  sym_document = 10,
  sym_block = 11,
  sym_line = 12,
  sym_code = 13,
  sym_text = 14,
  aux_sym_document_repeat1 = 15,
  aux_sym_document_repeat2 = 16,
  aux_sym_code_repeat1 = 17,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_meta] = "meta",
  [anon_sym_POUND_PLUS] = "#+",
  [anon_sym_BEGIN_SRC] = "BEGIN_SRC",
  [anon_sym_begin_src] = "begin_src",
  [anon_sym_END_SRC] = "END_SRC",
  [anon_sym_end_src] = "end_src",
  [anon_sym_LF] = "\n",
  [aux_sym_text_token1] = "text_token1",
  [sym_comment] = "comment",
  [sym_document] = "document",
  [sym_block] = "block",
  [sym_line] = "line",
  [sym_code] = "code",
  [sym_text] = "text",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_document_repeat2] = "document_repeat2",
  [aux_sym_code_repeat1] = "code_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_meta] = sym_meta,
  [anon_sym_POUND_PLUS] = anon_sym_POUND_PLUS,
  [anon_sym_BEGIN_SRC] = anon_sym_BEGIN_SRC,
  [anon_sym_begin_src] = anon_sym_begin_src,
  [anon_sym_END_SRC] = anon_sym_END_SRC,
  [anon_sym_end_src] = anon_sym_end_src,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_text_token1] = aux_sym_text_token1,
  [sym_comment] = sym_comment,
  [sym_document] = sym_document,
  [sym_block] = sym_block,
  [sym_line] = sym_line,
  [sym_code] = sym_code,
  [sym_text] = sym_text,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_document_repeat2] = aux_sym_document_repeat2,
  [aux_sym_code_repeat1] = aux_sym_code_repeat1,
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
  [anon_sym_POUND_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BEGIN_SRC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_begin_src] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_END_SRC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end_src] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_text_token1] = {
    .visible = false,
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
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_line] = {
    .visible = true,
    .named = true,
  },
  [sym_code] = {
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
  [aux_sym_code_repeat1] = {
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
      if (eof) ADVANCE(39);
      if (lookahead == '#') ADVANCE(5);
      if (lookahead == 'B') ADVANCE(11);
      if (lookahead == 'E') ADVANCE(14);
      if (lookahead == 'b') ADVANCE(27);
      if (lookahead == 'e') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == 'E') ADVANCE(62);
      if (lookahead == 'e') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '+') ADVANCE(43);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(36);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(6);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == 'C') ADVANCE(46);
      END_STATE();
    case 9:
      if (lookahead == 'C') ADVANCE(44);
      END_STATE();
    case 10:
      if (lookahead == 'D') ADVANCE(20);
      END_STATE();
    case 11:
      if (lookahead == 'E') ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == 'G') ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == 'I') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == 'N') ADVANCE(10);
      END_STATE();
    case 15:
      if (lookahead == 'N') ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == 'R') ADVANCE(8);
      END_STATE();
    case 17:
      if (lookahead == 'R') ADVANCE(9);
      END_STATE();
    case 18:
      if (lookahead == 'S') ADVANCE(16);
      END_STATE();
    case 19:
      if (lookahead == 'S') ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == '_') ADVANCE(18);
      END_STATE();
    case 21:
      if (lookahead == '_') ADVANCE(34);
      END_STATE();
    case 22:
      if (lookahead == '_') ADVANCE(19);
      END_STATE();
    case 23:
      if (lookahead == '_') ADVANCE(35);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(48);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(45);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(21);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == 'g') ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 34:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 35:
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 36:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 37:
      if (eof) ADVANCE(39);
      if (lookahead == '\n') SKIP(37)
      if (lookahead == '#') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(57);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 38:
      if (eof) ADVANCE(39);
      if (lookahead == '\n') SKIP(38)
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_meta);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_POUND_PLUS);
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_POUND_PLUS);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_POUND_PLUS);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(7);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_BEGIN_SRC);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_begin_src);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_END_SRC);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_END_SRC);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_end_src);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_end_src);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == ':') ADVANCE(56);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == ' ') ADVANCE(51);
      if (lookahead == '+') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == ' ') ADVANCE(51);
      if (lookahead == '+') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == ' ') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '#') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'C') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'D') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'E') ADVANCE(62);
      if (lookahead == 'e') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'N') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'R') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'S') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'd') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 37},
  [2] = {.lex_state = 37},
  [3] = {.lex_state = 38},
  [4] = {.lex_state = 38},
  [5] = {.lex_state = 38},
  [6] = {.lex_state = 37},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 38},
  [11] = {.lex_state = 38},
  [12] = {.lex_state = 38},
  [13] = {.lex_state = 38},
  [14] = {.lex_state = 38},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_meta] = ACTIONS(1),
    [anon_sym_POUND_PLUS] = ACTIONS(1),
    [anon_sym_BEGIN_SRC] = ACTIONS(1),
    [anon_sym_begin_src] = ACTIONS(1),
    [anon_sym_END_SRC] = ACTIONS(1),
    [anon_sym_end_src] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(17),
    [sym_block] = STATE(5),
    [sym_line] = STATE(11),
    [sym_code] = STATE(11),
    [sym_text] = STATE(12),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_document_repeat2] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_meta] = ACTIONS(5),
    [anon_sym_POUND_PLUS] = ACTIONS(7),
    [aux_sym_text_token1] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [2] = {
    [sym_block] = STATE(4),
    [sym_line] = STATE(11),
    [sym_code] = STATE(11),
    [sym_text] = STATE(12),
    [aux_sym_document_repeat1] = STATE(6),
    [aux_sym_document_repeat2] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym_meta] = ACTIONS(15),
    [anon_sym_POUND_PLUS] = ACTIONS(7),
    [aux_sym_text_token1] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      anon_sym_POUND_PLUS,
    ACTIONS(22), 1,
      aux_sym_text_token1,
    ACTIONS(25), 1,
      sym_comment,
    STATE(12), 1,
      sym_text,
    STATE(3), 2,
      sym_block,
      aux_sym_document_repeat2,
    STATE(11), 2,
      sym_line,
      sym_code,
  [24] = 7,
    ACTIONS(7), 1,
      anon_sym_POUND_PLUS,
    ACTIONS(9), 1,
      aux_sym_text_token1,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(28), 1,
      ts_builtin_sym_end,
    STATE(12), 1,
      sym_text,
    STATE(3), 2,
      sym_block,
      aux_sym_document_repeat2,
    STATE(11), 2,
      sym_line,
      sym_code,
  [48] = 7,
    ACTIONS(7), 1,
      anon_sym_POUND_PLUS,
    ACTIONS(9), 1,
      aux_sym_text_token1,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(12), 1,
      sym_text,
    STATE(3), 2,
      sym_block,
      aux_sym_document_repeat2,
    STATE(11), 2,
      sym_line,
      sym_code,
  [72] = 4,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
    ACTIONS(32), 1,
      sym_meta,
    STATE(6), 1,
      aux_sym_document_repeat1,
    ACTIONS(35), 3,
      anon_sym_POUND_PLUS,
      aux_sym_text_token1,
      sym_comment,
  [87] = 3,
    ACTIONS(39), 1,
      aux_sym_text_token1,
    ACTIONS(37), 2,
      anon_sym_END_SRC,
      anon_sym_end_src,
    STATE(7), 2,
      sym_text,
      aux_sym_code_repeat1,
  [99] = 3,
    ACTIONS(44), 1,
      aux_sym_text_token1,
    ACTIONS(42), 2,
      anon_sym_END_SRC,
      anon_sym_end_src,
    STATE(7), 2,
      sym_text,
      aux_sym_code_repeat1,
  [111] = 3,
    ACTIONS(44), 1,
      aux_sym_text_token1,
    ACTIONS(46), 2,
      anon_sym_END_SRC,
      anon_sym_end_src,
    STATE(8), 2,
      sym_text,
      aux_sym_code_repeat1,
  [123] = 2,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
    ACTIONS(50), 3,
      anon_sym_POUND_PLUS,
      aux_sym_text_token1,
      sym_comment,
  [132] = 2,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    ACTIONS(54), 3,
      anon_sym_POUND_PLUS,
      aux_sym_text_token1,
      sym_comment,
  [141] = 2,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    ACTIONS(58), 3,
      anon_sym_POUND_PLUS,
      aux_sym_text_token1,
      sym_comment,
  [150] = 2,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    ACTIONS(62), 3,
      anon_sym_POUND_PLUS,
      aux_sym_text_token1,
      sym_comment,
  [159] = 2,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    ACTIONS(66), 3,
      anon_sym_POUND_PLUS,
      aux_sym_text_token1,
      sym_comment,
  [168] = 1,
    ACTIONS(50), 3,
      anon_sym_END_SRC,
      anon_sym_end_src,
      aux_sym_text_token1,
  [174] = 1,
    ACTIONS(68), 2,
      anon_sym_BEGIN_SRC,
      anon_sym_begin_src,
  [179] = 1,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
  [183] = 1,
    ACTIONS(72), 1,
      anon_sym_LF,
  [187] = 1,
    ACTIONS(74), 1,
      anon_sym_LF,
  [191] = 1,
    ACTIONS(76), 1,
      anon_sym_LF,
  [195] = 1,
    ACTIONS(78), 1,
      anon_sym_LF,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 24,
  [SMALL_STATE(5)] = 48,
  [SMALL_STATE(6)] = 72,
  [SMALL_STATE(7)] = 87,
  [SMALL_STATE(8)] = 99,
  [SMALL_STATE(9)] = 111,
  [SMALL_STATE(10)] = 123,
  [SMALL_STATE(11)] = 132,
  [SMALL_STATE(12)] = 141,
  [SMALL_STATE(13)] = 150,
  [SMALL_STATE(14)] = 159,
  [SMALL_STATE(15)] = 168,
  [SMALL_STATE(16)] = 174,
  [SMALL_STATE(17)] = 179,
  [SMALL_STATE(18)] = 183,
  [SMALL_STATE(19)] = 187,
  [SMALL_STATE(20)] = 191,
  [SMALL_STATE(21)] = 195,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(16),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(20),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(12),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(6),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(21),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 2),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 4),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 4),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 5),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 5),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [70] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
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
