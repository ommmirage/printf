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
#include <stdarg.h>

void	process(t_format f, int *len, va_list *arg_ptr)
{
	if (f.type == 'd' || f.type == 'i')
		(*len) += di(f, va_arg(*arg_ptr, int));
	else if (f.type == 'u')
		(*len) += u(f, va_arg(*arg_ptr, unsigned int));
	else if (f.type == 'c')
		(*len) += c(f, va_arg(*arg_ptr, int));
	else if (f.type == 's')
		(*len) += s(f, va_arg(*arg_ptr, char*));
	else if (f.type == '%')
		(*len) += c(f, '%');
	else if (f.type == 'p')
		(*len) += p(f, va_arg(*arg_ptr, long));
	else if (f.type == 'x')
		(*len) += x(f, va_arg(*arg_ptr, unsigned int));
	else if (f.type == 'X')
		(*len) += capital_x(f, va_arg(*arg_ptr, unsigned int));
	else
		return ;
}
