//
// Created by mirage on 21.12.2020.
//

#include "../printf.h"

int	read_flags(const char *line, int *ind)
{
	int	flags;

	flags = FLAG_NONE;
	while (char_in_str(line[*ind], FLAGS))
	{
		if (line[*ind] == '-')
			flags = flags | FLAG_MINUS;
		else if (line[*ind] == '+')
			flags = flags | FLAG_PLUS;
		else if (line[*ind] == ' ')
			flags = flags | FLAG_SPACE;
		else if (line[*ind] == '#')
			flags = flags | FLAG_HASH;
		else if (line[*ind] == '0')
			flags = flags | FLAG_ZERO;
		(*ind)++;
	}
	return (flags);
}