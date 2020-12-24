//
// Created by Dewitt Chanell on 12/17/20.
//

#include "printf.h"
#include <stdarg.h>
#include <unistd.h>

void	write_before_percent(const char **line, int *len)
{
	while (**line && (**line != '%'))
	{
		write(1, *line, 1);
		(*line)++;
		(*len)++;
	}
	check_double_percent(line, len);
}

void	check_double_percent(const char **line, int *len)
{
	if (**line == '%')
		if (*(*line + 1) == '%')
		{
			write(1, "%", 1);
			(*line) += 2;
			(*len)++;
			write_before_percent(line, len);
		}
}

int		ft_printf(const char *line, ...)
{
	va_list 	arg_ptr;
	int 		len;
	t_format	f;

	va_start(arg_ptr, line);
	len = 0;
	while (*line)
	{
		write_before_percent(&line, &len);
		ft_bzero(&f, sizeof (f));
		if (!get_format(&f, &line, &arg_ptr))
		{
			va_end(arg_ptr);
			return (len);
		}
		process(f, &len, &arg_ptr);
	}
	va_end(arg_ptr);
	return (len);
}
