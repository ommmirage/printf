//
// Created by mirage on 20.12.2020.
//

#include "../printf.h"
#include <stdlib.h>
#include <stdarg.h>

int 	read_width(const char **line, va_list *arg_ptr)
{
	char	*str;
	int 	res;

	if (**line == '*')
	{
		(*line)++;
		return (va_arg(*arg_ptr, int));
	}
	str = get_int_str(line);
	res = ft_atoi(str);
	free(str);
	return (res);
}

int 	read_precision(const char **line, t_format *f, va_list *arg_ptr)
{
	char	*str;
	int 	res;

	if (**line != '.')
		return (-1);
	(*line)++;
	if (**line == '*')
	{
		(*line)++;
		f->flags = f->flags & (~FLAG_ZERO);
		return (va_arg(*arg_ptr, int));
	}
	str = get_int_str(line);
	res = ft_atoi(str);
	free(str);
	return (res);
}

char 	read_type(const char **line)
{
	char	type;

	type = **line;
	(*line)++;
	return (type);
}

int 	get_format(t_format *f, const char **line, va_list *arg_ptr)
{
	if (**line != '%')
		return (0);
	(*line)++;
	(*f).flags = read_flags(line);
	(*f).width = read_width(line, arg_ptr);
	if ((*f).width < 0)
	{
		(*f).flags = (*f).flags | FLAG_MINUS;
		(*f).width *= -1;
	}
	(*f).precision = read_precision(line, f, arg_ptr);
	(*f).type = read_type(line);
	return (1);
}