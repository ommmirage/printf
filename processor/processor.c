//
// Created by mirage on 22.12.2020.
//

#include "../printf.h"
#include <stdarg.h>

void	process(t_format f, int *len, va_list *arg_ptr)
{
	if (f.type == 'd' || f.type == 'i')
		(*len) += di(f, va_arg(*arg_ptr, int));
	else if (f.type == 'c')
		(*len) += c(f, va_arg(*arg_ptr, int));
	else if (f.type == 's')
		(*len) += s(f, va_arg(*arg_ptr, char*));
	else if (f.type == '%')
		return ;


}