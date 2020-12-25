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

static int	u_len(unsigned int num)
{
	int num_len;

	if (num == 0)
		return (1);
	num_len = 0;
	while (num != 0)
	{
		num_len++;
		num /= 10;
	}
	return (num_len);
}

int			u(t_format f, unsigned int num)
{
	int num_len;
	int printed_count;

	printed_count = 0;
	if (num < 0)
	{
		f.minus = 1;
		num *= -1;
	}
	num_len = u_len(num);
	width_spaces_before(f, &printed_count, num_len);
	write_minus(&f.minus, &printed_count);
	width_zeroes_before(f, &printed_count, num_len + printed_count);
	precision_zeroes(f.precision, num_len, &printed_count);
	write_minus(&f.minus, &printed_count);
	u_write_num(num, num_len, f, &printed_count);
	width_spaces_after(f, &printed_count);
	return (printed_count);
}