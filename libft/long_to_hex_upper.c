//
// Created by Dewitt Chanell on 12/25/20.
//

#include "libft.h"
#include <stdlib.h>

static void add_digit_to_str(char **str, int h)
{
	if (h < 10)
		**str = '0' + h;
	else if (h == 10)
		**str = 'A';
	else if (h == 11)
		**str = 'B';
	else if (h == 12)
		**str = 'C';
	else if (h == 13)
		**str = 'D';
	else if (h == 14)
		**str = 'E';
	else if (h == 15)
		**str = 'F';
	(*str)++;
}

static void	fill_str(char **str, long l)
{
	int		last;

	last = (int)(l % 16);
	l /= 16;
	if (l != 0)
		fill_str(str, l);
	add_digit_to_str(str, last);
}

char		*long_to_hex_upper(long l)
{
	char	*str;
	char	*res;

	str = malloc(9);
	res = str;
	if (l == 0)
	{
		*str = '0';
		*(str + 1) = 0;
	}
	else
	{
		fill_str(&str, l);
		*str = 0;
	}
	return (res);
}