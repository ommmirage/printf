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
#include <stdlib.h>

static void	x_print_str(const char *str, int str_len, int precision,
						int *printed_count)
{
	if ((*str == '0') && (str_len == 1) && (precision == 0))
		return ;
	write(1, str, str_len);
	(*printed_count) += str_len;
}

static void	x_width_spaces_before(t_format f, int *printed_count, int len,
								  unsigned int num)
{
	if (!(f.flags & FLAG_ZERO) && !(f.flags & FLAG_MINUS))
	{
		if ((num == 0) && (f.precision == 0))
			len = 0;
		while ((f.width > f.precision) && (f.width > len))
		{
			write(1, " ", 1);
			f.width--;
			(*printed_count)++;
		}
	}
}

int			x(t_format f, unsigned int num)
{
	char	*str;
	int 	str_len;
	int 	printed_count;

	printed_count = 0;
	str = long_to_hex(num);
	str_len = ft_strlen(str);
	x_width_spaces_before(f, &printed_count, str_len, num);
	width_zeroes_before(f, &printed_count, str_len + printed_count);
	precision_zeroes(f.precision, str_len, &printed_count);
	x_print_str(str, str_len, f.precision, &printed_count);
	width_spaces_after(f, &printed_count);
	free(str);
	return (printed_count);
}