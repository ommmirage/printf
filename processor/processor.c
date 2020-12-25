//
// Created by mirage on 22.12.2020.
//

#include "processor.h"
#include <stdarg.h>

void	process(t_format f, int *len, va_list *arg_ptr)
{
	if (f.type == 'd' || f.type == 'i' || f.type == 'u')
		(*len) += di(f, va_arg(*arg_ptr, int));
	else if (f.type == 'c')
		(*len) += c(f, va_arg(*arg_ptr, int));
	else if (f.type == 's')
		(*len) += s(f, va_arg(*arg_ptr, char*));
	else if (f.type == '%')
		(*len) += c(f, '%');
	else if (f.type == 'p')
		(*len) += p(f, va_arg(*arg_ptr, long));
	else
		return ;
}