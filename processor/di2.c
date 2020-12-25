//
// Created by Dewitt Chanell on 12/24/20.
//

#include "processor.h"

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

void	write_minus(int *minus, int *printed_count)
{
	if (*minus)
	{
		write(1, "-", 1);
		(*printed_count)++;
		(*minus) = 0;
	}
}
