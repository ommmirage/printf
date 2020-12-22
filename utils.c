//
// Created by mirage on 20.12.2020.
//

#include <stdlib.h>
#include "printf.h"

int char_in_str(char c, const char *str)
{
	while (*str)
	{
		if (c == *str)
			return (1);
		str++;
	}
	return (0);
}

char	*get_int_str(const char *line, int *len, int *format_len)
{
	int 	i;
	char	*str;

	str = malloc(12);
	i = 0;
	if (line[*len] == '-')
	{
		str[i++] = '-';
		(*len)++;
		(*format_len)++;
	}
	while (ft_isdigit(line[*len]))
	{
		str[i] = line[*len];
		i++;
		(*len)++;
		(*format_len)++;
	}
	str[i] = 0;
	return (str);
}