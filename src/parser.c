#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 18
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 15
#define ALIAS_COUNT 0
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  sym_meta = 1,
  aux_sym_text_token1 = 2,
  anon_sym_LF = 3,
  sym_comment = 4,
  anon_sym_POUND_PLUSBEGIN_SRC = 5,
  anon_sym_POUND_PLUSbegin_src = 6,
  anon_sym_POUND_PLUSEND_SRC = 7,
  anon_sym_POUND_PLUSend_src = 8,
  sym_document = 9,
  sym_block = 10,
  sym_line = 11,
  sym_code = 12,
  aux_sym_document_repeat1 = 13,
  aux_sym_code_repeat1 = 14,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_meta] = "meta",
  [aux_sym_text_token1] = "text_token1",
  [anon_sym_LF] = "\n",
  [sym_comment] = "comment",
  [anon_sym_POUND_PLUSBEGIN_SRC] = "#+BEGIN_SRC",
  [anon_sym_POUND_PLUSbegin_src] = "#+begin_src",
  [anon_sym_POUND_PLUSEND_SRC] = "#+END_SRC",
  [anon_sym_POUND_PLUSend_src] = "#+end_src",
  [sym_document] = "document",
  [sym_block] = "block",
  [sym_line] = "line",
  [sym_code] = "code",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_code_repeat1] = "code_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_meta] = sym_meta,
  [aux_sym_text_token1] = aux_sym_text_token1,
  [anon_sym_LF] = anon_sym_LF,
  [sym_comment] = sym_comment,
  [anon_sym_POUND_PLUSBEGIN_SRC] = anon_sym_POUND_PLUSBEGIN_SRC,
  [anon_sym_POUND_PLUSbegin_src] = anon_sym_POUND_PLUSbegin_src,
  [anon_sym_POUND_PLUSEND_SRC] = anon_sym_POUND_PLUSEND_SRC,
  [anon_sym_POUND_PLUSend_src] = anon_sym_POUND_PLUSend_src,
  [sym_document] = sym_document,
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
  [anon_sym_POUND_PLUSBEGIN_SRC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_PLUSbegin_src] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_PLUSEND_SRC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_PLUSend_src] = {
    .visible = true,
    .named = false,
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
  [aux_sym_document_repeat1] = {
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

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0) ADVANCE(67);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0) ADVANCE(67);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 7:
      if (eof) ADVANCE(8);
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(67);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_meta);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == 'B') ADVANCE(13);
      if (lookahead == 'b') ADVANCE(22);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'C') ADVANCE(71);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'E') ADVANCE(14);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'G') ADVANCE(15);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'I') ADVANCE(16);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'N') ADVANCE(19);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'R') ADVANCE(12);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'S') ADVANCE(17);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == '_') ADVANCE(18);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == '_') ADVANCE(27);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'c') ADVANCE(73);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'e') ADVANCE(23);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'g') ADVANCE(24);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(25);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'n') ADVANCE(20);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'r') ADVANCE(21);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 's') ADVANCE(26);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '+') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '+') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == ' ') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '+') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'B') ADVANCE(42);
      if (lookahead == 'E') ADVANCE(45);
      if (lookahead == 'b') ADVANCE(58);
      if (lookahead == 'e') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'C') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'C') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'D') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'E') ADVANCE(45);
      if (lookahead == 'e') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'E') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'G') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'I') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'N') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'N') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'R') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'R') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'S') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'S') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'd') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'g') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_POUND_PLUSBEGIN_SRC);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_POUND_PLUSBEGIN_SRC);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_POUND_PLUSbegin_src);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_POUND_PLUSbegin_src);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_POUND_PLUSEND_SRC);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_POUND_PLUSend_src);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 7},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_text_token1] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_POUND_PLUSBEGIN_SRC] = ACTIONS(1),
    [anon_sym_POUND_PLUSbegin_src] = ACTIONS(1),
    [anon_sym_POUND_PLUSEND_SRC] = ACTIONS(1),
    [anon_sym_POUND_PLUSend_src] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(14),
    [sym_block] = STATE(2),
    [sym_line] = STATE(4),
    [sym_code] = STATE(4),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_meta] = ACTIONS(5),
    [aux_sym_text_token1] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [anon_sym_POUND_PLUSBEGIN_SRC] = ACTIONS(11),
    [anon_sym_POUND_PLUSbegin_src] = ACTIONS(11),
  },
  [2] = {
    [sym_block] = STATE(3),
    [sym_line] = STATE(4),
    [sym_code] = STATE(4),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym_meta] = ACTIONS(5),
    [aux_sym_text_token1] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [anon_sym_POUND_PLUSBEGIN_SRC] = ACTIONS(11),
    [anon_sym_POUND_PLUSbegin_src] = ACTIONS(11),
  },
  [3] = {
    [sym_block] = STATE(3),
    [sym_line] = STATE(4),
    [sym_code] = STATE(4),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym_meta] = ACTIONS(17),
    [aux_sym_text_token1] = ACTIONS(20),
    [sym_comment] = ACTIONS(23),
    [anon_sym_POUND_PLUSBEGIN_SRC] = ACTIONS(26),
    [anon_sym_POUND_PLUSbegin_src] = ACTIONS(26),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 5,
      sym_meta,
      aux_sym_text_token1,
      sym_comment,
      anon_sym_POUND_PLUSBEGIN_SRC,
      anon_sym_POUND_PLUSbegin_src,
  [11] = 2,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 5,
      sym_meta,
      aux_sym_text_token1,
      sym_comment,
      anon_sym_POUND_PLUSBEGIN_SRC,
      anon_sym_POUND_PLUSbegin_src,
  [22] = 2,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 5,
      sym_meta,
      aux_sym_text_token1,
      sym_comment,
      anon_sym_POUND_PLUSBEGIN_SRC,
      anon_sym_POUND_PLUSbegin_src,
  [33] = 2,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 5,
      sym_meta,
      aux_sym_text_token1,
      sym_comment,
      anon_sym_POUND_PLUSBEGIN_SRC,
      anon_sym_POUND_PLUSbegin_src,
  [44] = 2,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 5,
      sym_meta,
      aux_sym_text_token1,
      sym_comment,
      anon_sym_POUND_PLUSBEGIN_SRC,
      anon_sym_POUND_PLUSbegin_src,
  [55] = 3,
    ACTIONS(49), 1,
      aux_sym_text_token1,
    STATE(10), 1,
      aux_sym_code_repeat1,
    ACTIONS(51), 2,
      anon_sym_POUND_PLUSEND_SRC,
      anon_sym_POUND_PLUSend_src,
  [66] = 3,
    ACTIONS(49), 1,
      aux_sym_text_token1,
    STATE(11), 1,
      aux_sym_code_repeat1,
    ACTIONS(53), 2,
      anon_sym_POUND_PLUSEND_SRC,
      anon_sym_POUND_PLUSend_src,
  [77] = 3,
    ACTIONS(55), 1,
      aux_sym_text_token1,
    STATE(11), 1,
      aux_sym_code_repeat1,
    ACTIONS(58), 2,
      anon_sym_POUND_PLUSEND_SRC,
      anon_sym_POUND_PLUSend_src,
  [88] = 1,
    ACTIONS(58), 3,
      aux_sym_text_token1,
      anon_sym_POUND_PLUSEND_SRC,
      anon_sym_POUND_PLUSend_src,
  [94] = 1,
    ACTIONS(60), 1,
      anon_sym_LF,
  [98] = 1,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
  [102] = 1,
    ACTIONS(64), 1,
      anon_sym_LF,
  [106] = 1,
    ACTIONS(66), 1,
      anon_sym_LF,
  [110] = 1,
    ACTIONS(68), 1,
      anon_sym_LF,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 11,
  [SMALL_STATE(6)] = 22,
  [SMALL_STATE(7)] = 33,
  [SMALL_STATE(8)] = 44,
  [SMALL_STATE(9)] = 55,
  [SMALL_STATE(10)] = 66,
  [SMALL_STATE(11)] = 77,
  [SMALL_STATE(12)] = 88,
  [SMALL_STATE(13)] = 94,
  [SMALL_STATE(14)] = 98,
  [SMALL_STATE(15)] = 102,
  [SMALL_STATE(16)] = 106,
  [SMALL_STATE(17)] = 110,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(13),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(5),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(9),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 3),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 4),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 4),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(15),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [62] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
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
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
