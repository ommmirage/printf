//
// Created by mirage on 22.12.2020.
//

#include "../printf.h"
#include <stdarg.h>
#include <unistd.h>

void	width_spaces(t_format f, int len)
{
	while ((f.width > f.precision) && (f.width > len))
	{
		write(1, " ", 1);
		f.width--;
	}
}

void	flag_zeroes(t_format f, int len)
{
	if (f.flags & FLAG_ZERO)
		while (len < f.width)
		{
			write(1, "0", 1);
			len++;
		}
}

void	precision_zeroes(int precision, int len)
{
	while (precision > len)
	{
		write(1, "0", 1);
		len++;
	}
}

void	di(t_format f, int num)
{
	int len;

	len = int_len(num);
	width_spaces(f, len);
	flag_zeroes(f, len);
	precision_zeroes(f.precision, len);
	write(1, ft_itoa(num), len);
}

void	process(t_format f, va_list *arg_ptr)
{
	if (f.type == 'd' || f.type == 'i')
		di(f, va_arg((*arg_ptr), int));
	else
		return ;


}