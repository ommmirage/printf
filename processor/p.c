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
		fill_str(str, l);
	add_digit_to_str(str, last);
}

char	*long_to_hex(long l)
{
	char	*str;
	char	*res;

	str = malloc(11);
	res = str;
	str[0] = '0';
	str[1] = 'x';
	str += 2;
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

void	p_width_before(t_format f, int *printed_count, int len)
{
	char	space_or_zero;

	if (f.flags & FLAG_ZERO)
		space_or_zero = '0';
	else
		space_or_zero = ' ';
	if (!(f.flags & FLAG_MINUS))
	{
		while ((f.width > f.precision) && (f.width > len))
		{
			write(1, &space_or_zero, 1);
			f.width--;
			(*printed_count)++;
		}
	}
}

void	p_print_str(const char *str, int str_len, t_format f,
				 int *printed_count)
{
	write(1, "0x", 2);
	str += 2;
	(*printed_count) += 2;
	precision_zeroes(f.precision, str_len, printed_count);
	write(1, str, str_len - 2);
	(*printed_count) += (str_len - 2);
	width_spaces_after(f, printed_count);
}

int		p(t_format f, long p)
{
	int 	printed;
	char	*str;
	int		str_len;

	printed = 0;
	str = long_to_hex(p);
	str_len = ft_strlen(str);
	if ((p == 0) && (f.precision == 0))
		str_len = 2;
	if (f.precision != -1)
		f.precision += 2;
	p_width_before(f, &printed, str_len);
	p_print_str(str, str_len, f, &printed);
	if (printed == 0)
	{
		write(1, "0x", 2);
		printed += 2;
	}
	return (printed);
}