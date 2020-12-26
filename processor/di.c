/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dechanel <ommmirage@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 14:57:10 by dechanel          #+#    #+#             */
/*   Updated: 2020/10/28 15:06:52 by dechanel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "processor.h"

void		width_spaces_before(t_format f, int *printed_count, int len)
{
	if (!(f.flags & FLAG_ZERO) && !(f.flags & FLAG_MINUS))
	{
		if (f.minus)
			f.width--;
		while ((f.width > f.precision) && (f.width > len))
		{
			write(1, " ", 1);
			f.width--;
			(*printed_count)++;
		}
	}
}

void		width_zeroes_before(t_format f, int *printed_count, int len)
{
	if ((f.flags & FLAG_ZERO) && !(f.flags & FLAG_MINUS))
		while (((f.precision != -1) && (f.width > f.precision)) ||
				(f.width > len))
		{
			write(1, "0", 1);
			f.width--;
			(*printed_count)++;
		}
}

static int min_max(int num)
{
	if (num == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (1);
	}
	return (0);
}

int			di(t_format f, int num)
{
	int num_len;
	int printed_count;

	if (min_max(num))
		return (11);
	printed_count = 0;
	if (num < 0)
	{
		f.minus = 1;
		num *= -1;
	}
	num_len = int_len(num);
	width_spaces_before(f, &printed_count, num_len);
	write_minus(&f.minus, &printed_count);
	width_zeroes_before(f, &printed_count, num_len + printed_count);
	precision_zeroes(f.precision, num_len, &printed_count);
	write_minus(&f.minus, &printed_count);
	write_num(num, num_len, f, &printed_count);
	width_spaces_after(f, &printed_count);
	return (printed_count);
}