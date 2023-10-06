#include <stdlib.h>
#include <tree_sitter/parser.h>

#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void debug(const char *format, ...) {
  va_list args;
  va_start(args, format);

  char buffer[1000];
  vsnprintf(buffer, sizeof(buffer), format, args);

  va_end(args);

  char command[1100];
  snprintf(command, sizeof(command), ">&2 echo '%s'", buffer);
  system(command);
}

enum TokenType { COMMENT, EOL };

void *tree_sitter_eqidio_external_scanner_create() { return malloc(1); }

void tree_sitter_eqidio_external_scanner_destroy(void *payload) {
  free(payload);
}

unsigned tree_sitter_eqidio_external_scanner_serialize(void *payload,
                                                       char *buffer) {
  buffer[0] = ((char*) payload)[0];
  return 1;
}

void tree_sitter_eqidio_external_scanner_deserialize(void *payload,
                                                     const char *buffer,
                                                     unsigned length) {
  ((char *)payload)[0] = length > 0 ? buffer[0] : false;
}

void ladvance(TSLexer *lexer) { lexer->advance(lexer, false); }

bool tree_sitter_eqidio_external_scanner_scan(void *payload, TSLexer *lexer,
                                              const bool *valid_symbols) {
  if (valid_symbols[COMMENT]) {
    if (lexer->lookahead != '%')
      return false;
    ladvance(lexer);
    if (lexer->lookahead == '%')
      return false;
    for (;;) {
      if (lexer->eof(lexer) || lexer->lookahead == '\r' ||
          lexer->lookahead == '\n')
        break;
      if (lexer->lookahead == '%') {
        ladvance(lexer);
        if (lexer->lookahead == '%') {
          ladvance(lexer);
          continue;
        }
        break;
      }
      ladvance(lexer);
    }
    lexer->result_symbol = COMMENT;
    return true;
  }
  if (valid_symbols[EOL]) {
      return false;
  }
}
