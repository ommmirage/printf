//
// Created by Dewitt Chanell on 12/24/20.
//

#include "../printf.h"
#include <unistd.h>

void	write_num(int num, int num_len, t_format f, int *printed_count)
{
	if (f.precision == 0 && num == 0)
	{
		if (*printed_count < f.width)
		{
			write(1, " ", 1);
			(*printed_count)++;
		}
		return ;
	}
	write(1, ft_itoa(num), num_len);
	(*printed_count) += num_len;
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
