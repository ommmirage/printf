//
// Created by Dewitt Chanell on 12/25/20.
//

#include "processor.h"

static void	width_before(t_format f, int *printed_count)
{
	char	space_or_zero;

	if (f.flags & FLAG_ZERO)
		space_or_zero = '0';
	else
		space_or_zero = ' ';
	if (!(f.flags & FLAG_MINUS))
	{
		while (f.width > 1)
		{
			write(1, &space_or_zero, 1);
			f.width--;
			(*printed_count)++;
		}
	}
}

static void	print_char(int int_char, int *printed_count)
{
	char 	c;

	c = (char)int_char;
	write(1, &c, 1);
	(*printed_count)++;
}

static void	width_spaces_after(t_format f, int *printed_count)
{
	if (f.flags & FLAG_MINUS)
		while ((f.width > f.precision) && (f.width > *printed_count))
		{
			write(1, " ", 1);
			f.precision++;
			(*printed_count)++;
		}
}

int			c(t_format f, int int_char)
{
	int 	printed_count;

	printed_count = 0;
	width_before(f, &printed_count);
	print_char(int_char, &printed_count);
	width_spaces_after(f, &printed_count);
	return (printed_count);
}