//
// Created by mirage on 22.12.2020.
//

#include "../printf.h"
#include <stdarg.h>
#include <unistd.h>

void	print_zeroes(t_format f, int arg)
{
	int len;

	len = int_len(arg);
	if (f.flags & FLAG_ZERO)
		while (len < f.width)
		{
			write(1, "0", 1);
			f.width--;
		}
}

void	di(t_format f, int arg)
{
	print_zeroes(f, arg);

}

void	process(t_format f, const char *line, int *len, int *ind, va_list *arg_ptr)
{
	if (f.type == 'd' || f.type == 'i')
		di(f, va_arg((*arg_ptr), int));
	//else

}