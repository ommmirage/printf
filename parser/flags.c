//
// Created by mirage on 21.12.2020.
//

#include "../printf.h"

int	read_flags(const char **line)
{
	int	flags;

	flags = FLAG_NONE;
	while (char_in_str(**line, FLAGS))
	{
		if (**line == '-')
			flags = flags | FLAG_MINUS;
		else if (**line == '+')
			flags = flags | FLAG_PLUS;
		else if (**line == ' ')
			flags = flags | FLAG_SPACE;
		else if (**line == '#')
			flags = flags | FLAG_HASH;
		else if (**line == '0')
			flags = flags | FLAG_ZERO;
		(*line)++;
	}
	return (flags);
}