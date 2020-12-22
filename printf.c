//
// Created by Dewitt Chanell on 12/17/20.
//

#include "printf.h"
#include <stdarg.h>
#include <unistd.h>

void	write_before_percent(const char *line, int *len)
{
	*len = 0;
	while (line[*len] && (line[*len] != '%'))
	{
		write(1, &line[*len], 1);
		(*len)++;
	}
}

int	ft_printf(const char *line, ...)
{
	va_list arg_ptr;
	int 	len;

	va_start(arg_ptr, line);
	write_before_percent(line, &len);
	parse_after_percent(line, &len, &arg_ptr);

	va_end(arg_ptr);
	return (len);
}
