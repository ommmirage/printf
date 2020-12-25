//
// Created by Dewitt Chanell on 12/24/20.
//

#include "processor.h"

static void	u_write_num(unsigned int num, int num_len, t_format f,
						int *printed_count)
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
	write(1, ft_uitoa(num), num_len);
	(*printed_count) += num_len;
}

int			u(t_format f, unsigned int num)
{
	int num_len;
	int printed_count;

	printed_count = 0;
	num_len = ft_u_len(num);
	width_spaces_before(f, &printed_count, num_len);
	width_zeroes_before(f, &printed_count, num_len + printed_count);
	precision_zeroes(f.precision, num_len, &printed_count);
	u_write_num(num, num_len, f, &printed_count);
	width_spaces_after(f, &printed_count);
	return (printed_count);
}