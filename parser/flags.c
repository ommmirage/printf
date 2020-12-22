//
// Created by mirage on 21.12.2020.
//

#include "../printf.h"
#include "parser.h"

int	read_flags(const char *line, int *len, int *format_len)
{
	int	flags;

	flags = 0b00000000;
	while (char_in_str(line[*len], FLAGS))
	{
		if (line[*len] == '-')
			flags = flags | FLAG_MINUS;
		else if (line[*len] == '+')
			flags = flags | FLAG_PLUS;
		else if (line[*len] == ' ')
			flags = flags | FLAG_SPACE;
		else if (line[*len] == '#')
			flags = flags | FLAG_HASH;
		else if (line[*len] == '0')
			flags = flags | FLAG_ZERO;
		(*len)++;
		(*format_len)++;
	}
	return (flags);
}