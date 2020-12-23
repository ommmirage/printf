//
// Created by mirage on 20.12.2020.
//

#include "../printf.h"
#include <stdlib.h>
#include <stdarg.h>

int 	read_width(const char *line, int *ind, va_list *arg_ptr)
{
	char	*str;
	int 	res;

	if (line[*ind] == '*')
	{
		(*ind)++;
		return (va_arg(*arg_ptr, int));
	}
	str = get_int_str(line, ind);
	res = ft_atoi(str);
	free(str);
	return (res);
}

int 	read_precision(const char *line, int *ind, va_list *arg_ptr)
{
	char	*str;
	int 	res;

	if (line[*ind] != '.')
		return (-1);
	(*ind)++;
	if (line[*ind] == '*')
	{
		(*ind)++;
		return (va_arg(*arg_ptr, int));
	}
	str = get_int_str(line, ind);
	res = ft_atoi(str);
	free(str);
	return (res);
}

char 	read_type(const char *line, int *ind)
{
	char	type;

	type = line[*ind];
	(*ind)++;
	return (type);
}

int 	get_format(t_format *f, const char *line, int *ind, va_list *arg_ptr)
{
	if (line[*ind] != '%')
		return (0);
	(*ind)++;
	(*f).flags = read_flags(line, ind);
	(*f).width = read_width(line, ind, arg_ptr);
	if ((*f).width < 0)
	{
		(*f).flags = (*f).flags | FLAG_MINUS;
		(*f).width = 0;
	}
	(*f).precision = read_precision(line, ind, arg_ptr);
	(*f).type = read_type(line, ind);
	return (1);
}