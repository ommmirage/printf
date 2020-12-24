//
// Created by Dewitt Chanell on 12/24/20.
//

#include "../printf.h"
#include <unistd.h>

void	write_num(int *num, int *num_len, int *printed_count)
{
	if (*num < 0)
	{
		write(1, "-", 1);
		(*num) *= -1;
		(*num_len)--;
		(*printed_count)++;
	}
	write(1, ft_itoa(*num), *num_len);
	(*printed_count) += *num_len;
}

void	width_spaces_after(t_format f, int *printed_count)
{
	if (f.flags & FLAG_MINUS)
		while ((f.width > f.precision) && (f.width > *printed_count))
		{
			write(1, " ", 1);
			f.precision++;
			(*printed_count)++;
		}
}
