//
// Created by Dewitt Chanell on 12/25/20.
//

#include "processor.h"
#include <stdlib.h>

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
	str = long_to_hex0x(p);
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