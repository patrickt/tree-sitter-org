#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 25
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 19
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 6

enum {
  aux_sym_meta_token1 = 1,
  anon_sym_COLON = 2,
  aux_sym_meta_token2 = 3,
  anon_sym_LF = 4,
  aux_sym_text_token1 = 5,
  sym_comment = 6,
  anon_sym_BEGIN_SRC = 7,
  anon_sym_begin_src = 8,
  anon_sym_END_SRC = 9,
  anon_sym_end_src = 10,
  sym__poundplus = 11,
  sym_document = 12,
  sym_meta = 13,
  sym_block = 14,
  sym_line = 15,
  sym_code = 16,
  aux_sym_document_repeat1 = 17,
  aux_sym_code_repeat1 = 18,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_meta_token1] = "meta_token1",
  [anon_sym_COLON] = ": ",
  [aux_sym_meta_token2] = "meta_token2",
  [anon_sym_LF] = "\n",
  [aux_sym_text_token1] = "text_token1",
  [sym_comment] = "comment",
  [anon_sym_BEGIN_SRC] = "BEGIN_SRC",
  [anon_sym_begin_src] = "begin_src",
  [anon_sym_END_SRC] = "END_SRC",
  [anon_sym_end_src] = "end_src",
  [sym__poundplus] = "_poundplus",
  [sym_document] = "document",
  [sym_meta] = "meta",
  [sym_block] = "block",
  [sym_line] = "line",
  [sym_code] = "code",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_code_repeat1] = "code_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_meta_token1] = aux_sym_meta_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_meta_token2] = aux_sym_meta_token2,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_text_token1] = aux_sym_text_token1,
  [sym_comment] = sym_comment,
  [anon_sym_BEGIN_SRC] = anon_sym_BEGIN_SRC,
  [anon_sym_begin_src] = anon_sym_begin_src,
  [anon_sym_END_SRC] = anon_sym_END_SRC,
  [anon_sym_end_src] = anon_sym_end_src,
  [sym__poundplus] = sym__poundplus,
  [sym_document] = sym_document,
  [sym_meta] = sym_meta,
  [sym_block] = sym_block,
  [sym_line] = sym_line,
  [sym_code] = sym_code,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_code_repeat1] = aux_sym_code_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_meta_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_meta_token2] = {
    .visible = false,
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
  [sym__poundplus] = {
    .visible = false,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_meta] = {
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
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_code_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_key = 1,
  field_value = 2,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[2] = {
  [1] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 1},
    {field_value, 3},
};

static TSSymbol ts_alias_sequences[2][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(38);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'B') ADVANCE(12);
      if (lookahead == 'E') ADVANCE(15);
      if (lookahead == 'b') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(67);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '#') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0) ADVANCE(66);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == 'B') ADVANCE(41);
      if (lookahead == 'b') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(56);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead != 0) ADVANCE(66);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '+') ADVANCE(74);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(57);
      END_STATE();
    case 9:
      if (lookahead == 'C') ADVANCE(72);
      END_STATE();
    case 10:
      if (lookahead == 'C') ADVANCE(68);
      END_STATE();
    case 11:
      if (lookahead == 'D') ADVANCE(21);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == 'G') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'I') ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == 'N') ADVANCE(11);
      END_STATE();
    case 16:
      if (lookahead == 'N') ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == 'R') ADVANCE(9);
      END_STATE();
    case 18:
      if (lookahead == 'R') ADVANCE(10);
      END_STATE();
    case 19:
      if (lookahead == 'S') ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == 'S') ADVANCE(18);
      END_STATE();
    case 21:
      if (lookahead == '_') ADVANCE(19);
      END_STATE();
    case 22:
      if (lookahead == '_') ADVANCE(35);
      END_STATE();
    case 23:
      if (lookahead == '_') ADVANCE(20);
      END_STATE();
    case 24:
      if (lookahead == '_') ADVANCE(36);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(73);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(22);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == 'g') ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 35:
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 36:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 37:
      if (eof) ADVANCE(38);
      if (lookahead == '\n') SKIP(37)
      if (lookahead == '#') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0) ADVANCE(66);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'B') ADVANCE(41);
      if (lookahead == 'b') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(56);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'C') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(56);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'E') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(56);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'G') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(56);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'I') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(56);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'N') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(56);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'R') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(56);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'S') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(56);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == '_') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(56);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == '_') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(56);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'c') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(56);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(56);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'g') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(56);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(56);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'n') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(56);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 'r') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(56);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == 's') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_meta_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_meta_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(67);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '#') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0) ADVANCE(66);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead != 0) ADVANCE(66);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == ' ') ADVANCE(61);
      if (lookahead == '+') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '+') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_BEGIN_SRC);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_BEGIN_SRC);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(56);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_begin_src);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_begin_src);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(56);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_END_SRC);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_end_src);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__poundplus);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 37},
  [2] = {.lex_state = 37},
  [3] = {.lex_state = 37},
  [4] = {.lex_state = 37},
  [5] = {.lex_state = 37},
  [6] = {.lex_state = 37},
  [7] = {.lex_state = 37},
  [8] = {.lex_state = 37},
  [9] = {.lex_state = 37},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_BEGIN_SRC] = ACTIONS(1),
    [anon_sym_begin_src] = ACTIONS(1),
    [anon_sym_END_SRC] = ACTIONS(1),
    [anon_sym_end_src] = ACTIONS(1),
    [sym__poundplus] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(24),
    [sym_meta] = STATE(7),
    [sym_block] = STATE(2),
    [sym_line] = STATE(7),
    [sym_code] = STATE(7),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_text_token1] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [sym__poundplus] = ACTIONS(9),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym__poundplus,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    STATE(3), 2,
      sym_block,
      aux_sym_document_repeat1,
    STATE(7), 3,
      sym_meta,
      sym_line,
      sym_code,
  [22] = 6,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      aux_sym_text_token1,
    ACTIONS(18), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym__poundplus,
    STATE(3), 2,
      sym_block,
      aux_sym_document_repeat1,
    STATE(7), 3,
      sym_meta,
      sym_line,
      sym_code,
  [44] = 2,
    ACTIONS(24), 1,
      ts_builtin_sym_end,
    ACTIONS(26), 3,
      aux_sym_text_token1,
      sym_comment,
      sym__poundplus,
  [53] = 2,
    ACTIONS(28), 1,
      ts_builtin_sym_end,
    ACTIONS(30), 3,
      aux_sym_text_token1,
      sym_comment,
      sym__poundplus,
  [62] = 2,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    ACTIONS(34), 3,
      aux_sym_text_token1,
      sym_comment,
      sym__poundplus,
  [71] = 2,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 3,
      aux_sym_text_token1,
      sym_comment,
      sym__poundplus,
  [80] = 2,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    ACTIONS(42), 3,
      aux_sym_text_token1,
      sym_comment,
      sym__poundplus,
  [89] = 2,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    ACTIONS(46), 3,
      aux_sym_text_token1,
      sym_comment,
      sym__poundplus,
  [98] = 3,
    ACTIONS(48), 1,
      aux_sym_text_token1,
    ACTIONS(51), 1,
      sym__poundplus,
    STATE(10), 1,
      aux_sym_code_repeat1,
  [108] = 2,
    ACTIONS(53), 1,
      aux_sym_meta_token1,
    ACTIONS(55), 2,
      anon_sym_BEGIN_SRC,
      anon_sym_begin_src,
  [116] = 3,
    ACTIONS(57), 1,
      aux_sym_text_token1,
    ACTIONS(59), 1,
      sym__poundplus,
    STATE(13), 1,
      aux_sym_code_repeat1,
  [126] = 3,
    ACTIONS(57), 1,
      aux_sym_text_token1,
    ACTIONS(61), 1,
      sym__poundplus,
    STATE(10), 1,
      aux_sym_code_repeat1,
  [136] = 1,
    ACTIONS(63), 2,
      anon_sym_END_SRC,
      anon_sym_end_src,
  [141] = 1,
    ACTIONS(51), 2,
      aux_sym_text_token1,
      sym__poundplus,
  [146] = 1,
    ACTIONS(65), 2,
      anon_sym_END_SRC,
      anon_sym_end_src,
  [151] = 1,
    ACTIONS(67), 1,
      aux_sym_meta_token2,
  [155] = 1,
    ACTIONS(69), 1,
      anon_sym_LF,
  [159] = 1,
    ACTIONS(71), 1,
      anon_sym_LF,
  [163] = 1,
    ACTIONS(73), 1,
      anon_sym_LF,
  [167] = 1,
    ACTIONS(75), 1,
      anon_sym_LF,
  [171] = 1,
    ACTIONS(77), 1,
      anon_sym_COLON,
  [175] = 1,
    ACTIONS(79), 1,
      anon_sym_LF,
  [179] = 1,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 44,
  [SMALL_STATE(5)] = 53,
  [SMALL_STATE(6)] = 62,
  [SMALL_STATE(7)] = 71,
  [SMALL_STATE(8)] = 80,
  [SMALL_STATE(9)] = 89,
  [SMALL_STATE(10)] = 98,
  [SMALL_STATE(11)] = 108,
  [SMALL_STATE(12)] = 116,
  [SMALL_STATE(13)] = 126,
  [SMALL_STATE(14)] = 136,
  [SMALL_STATE(15)] = 141,
  [SMALL_STATE(16)] = 146,
  [SMALL_STATE(17)] = 151,
  [SMALL_STATE(18)] = 155,
  [SMALL_STATE(19)] = 159,
  [SMALL_STATE(20)] = 163,
  [SMALL_STATE(21)] = 167,
  [SMALL_STATE(22)] = 171,
  [SMALL_STATE(23)] = 175,
  [SMALL_STATE(24)] = 179,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(21),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(5),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(11),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 6),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 6),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 5),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 5),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 1),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 2),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 5, .production_id = 1),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta, 5, .production_id = 1),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(20),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [81] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
    .alias_map = ts_non_terminal_alias_map,
    .state_count = STATE_COUNT,
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
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
