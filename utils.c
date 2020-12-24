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

char	*get_int_str(const char **line)
{
	int 	i;
	char	*str;

	str = malloc(12);
	i = 0;
	if (**line == '-')
	{
		str[i++] = '-';
		(*line)++;
	}
	while (ft_isdigit(**line))
	{
		str[i] = **line;
		i++;
		(*line)++;
	}
	str[i] = 0;
	return (str);
}

int		int_len(int num)
{
	int num_len;

	if (num == 0)
		return (1);
	num_len = 0;
	if (num < 0)
		num_len++;
	while (num != 0)
	{
		num_len++;
		num /= 10;
	}
	return (num_len);
}