//
// Created by Dewitt Chanell on 12/25/20.
//

#include "../printf.h"
#include <unistd.h>

static void	width_before(t_format f, int *printed_count, int len)
{
	char	space_or_zero;

	if (f.flags & FLAG_ZERO)
		space_or_zero = '0';
	else
		space_or_zero = ' ';
	if (!(f.flags & FLAG_MINUS))
	{
		if (f.minus)
			f.width--;
		while (((f.precision != -1) && (f.width > f.precision)) || (f.width > len))
		{
			write(1, &space_or_zero, 1);
			f.width--;
			(*printed_count)++;
		}
	}
}

static void	width_spaces_after(t_format f, int *printed_count)
{
	if (f.flags & FLAG_MINUS)
		while (f.width > *printed_count)
		{
			write(1, " ", 1);
			f.precision++;
			(*printed_count)++;
		}
}

static void	print_str(t_format f, const char *str, int str_len,
					  int *printed_count)
{
	if ((f.precision != -1) && (f.precision < str_len))
		str_len = f.precision;
	write(1, str, str_len);
	(*printed_count) += str_len;
}

int			s(t_format f, const char *str)
{
	int 	printed_count;
	int 	str_len;

	printed_count = 0;
	if (str)
	{
		str_len = ft_strlen(str);
		width_before(f, &printed_count, str_len);
		print_str(f, str, str_len, &printed_count);
		width_spaces_after(f, &printed_count);
	}
	else
	{
		width_before(f, &printed_count, 6);
		print_str(f, "(null)", 6, &printed_count);
		width_spaces_after(f, &printed_count);
	}
	return (printed_count);
}