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

char	*get_int_str(const char *line, int *ind)
{
	int 	i;
	char	*str;

	str = malloc(12);
	i = 0;
	if (line[*ind] == '-')
	{
		str[i++] = '-';
		(*ind)++;
	}
	while (ft_isdigit(line[*ind]))
	{
		str[i] = line[*ind];
		i++;
		(*ind)++;
	}
	str[i] = 0;
	return (str);
}

int		int_len(int num)
{
	int len;

	len = 0;
	if (num < 0)
		len++;
	while (num / 10 != 0)
	{
		len++;
		num /= 10;
	}
	return (len);
}