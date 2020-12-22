//
// Created by mirage on 21.12.2020.
//

#ifndef PRINTF_PARSER_H
#define PRINTF_PARSER_H

# define FLAGS		"-+ #0"
# define FLAG_NONE	0b00000000
# define FLAG_MINUS	0b00000001
# define FLAG_PLUS	0b00000010
# define FLAG_SPACE	0b00000100
# define FLAG_HASH	0b00001000
# define FLAG_ZERO	0b00010000

int read_flags(const char *line, int *len, int *format_len);

#endif
