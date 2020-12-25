//
// Created by Dewitt Chanell on 12/25/20.
//

#include "processor.h"
#include <stdlib.h>

void add_digit_to_str(char **str, int h)
{
	if (h < 10)
		**str = '0' + h;
	else if (h == 10)
		**str = 'a';
	else if (h == 11)
		**str = 'b';
	else if (h == 12)
		**str = 'c';
	else if (h == 13)
		**str = 'd';
	else if (h == 14)
		**str = 'e';
	else if (h == 15)
		**str = 'f';
	(*str)++;
}

void	fill_str(char **str, long l)
{
	int		last;

	last = (int)(l % 16);
	l /= 16;
	if (l != 0)
	{
		fill_str(str, l);
		add_digit_to_str(str, last);
	}
	else
		**str = 0;
}

char	*long_to_hex(long l)
{
	char	*str;
	char	*res;

	str = malloc(11);
	str[0] = '0';
	str[1] = 'x';
	str += 2;
	res = str;
	if (l == 0)
	{
		*str = '0';
		*(str + 1) = 0;
	}
	else
		fill_str(&str, l);
	return (res);
}

int	p(t_format f, long p)
{
	int 	printed;
	char	*str;
	int		str_len;

	printed = 0;
	str = long_to_hex(p);
	str_len = ft_strlen(str);
	print_str(f, str, str_len, &printed);
	free(str);
	return (printed);
}