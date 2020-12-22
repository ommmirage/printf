//
// Created by mirage on 20.12.2020.
//

#include "../printf.h"
#include "parser.h"
#include <stdlib.h>
#include <stdarg.h>

int 	read_width(const char *line, int *len, int *format_len, va_list *arg_ptr)
{
	char	*str;
	int 	res;

	if (line[*len] == '*')
	{
		(*len)++;
		(*format_len)++;
		return (va_arg(*arg_ptr, int));
	}
	str = get_int_str(line, len, format_len);
	res = ft_atoi(str);
	free(str);
	return (res);
}

int 	read_precision(const char *line, int *len, int *format_len, va_list *arg_ptr)
{
	char	*str;
	int 	res;

	if (line[*len] != '.')
		return (-1);
	(*len)++;
	(*format_len)++;
	if (line[*len] == '*')
	{
		(*len)++;
		(*format_len)++;
		return (va_arg(*arg_ptr, int));
	}
	str = get_int_str(line, len, format_len);
	res = ft_atoi(str);
	free(str);
	return (res);
}

char 	read_type(const char *line, int *len, int *format_len)
{
	char	type;

	type = line[*len];
	(*len)++;
	(*format_len)++;
	return (type);
}

void	parse_after_percent(const char *line, int *len, va_list *arg_ptr)
{
	t_format	f;

	if (line[*len] != '%')
		return ;
	(*len)++;
	f.format_len = 1;
	f.flags = read_flags(line, len, &f.format_len);
	f.width = read_width(line, len, &f.format_len, arg_ptr);
	if (f.width < 0)
	{
		f.flags = f.flags | FLAG_MINUS;
		f.width = 0;
	}
	f.precision = read_precision(line, len, &f.format_len, arg_ptr);
	f.type = read_type(line, len, &f.format_len);
}