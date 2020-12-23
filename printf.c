//
// Created by Dewitt Chanell on 12/17/20.
//

#include "printf.h"
#include <stdarg.h>
#include <unistd.h>

void	write_before_percent(const char *line, int *len, int *ind)
{
	*len = 0;
	*ind = 0;
	while (line[*ind] && (line[*ind] != '%'))
	{
		write(1, &line[*ind], 1);
		(*ind)++;
		(*len)++;
	}
}

int	ft_printf(const char *line, ...)
{
	va_list 	arg_ptr;
	int 		len;
	t_format	f;
	int 		ind;

	va_start(arg_ptr, line);
	write_before_percent(line, &len, &ind);
	ft_bzero(&f, sizeof (f));
	if (!get_format(&f, line, &ind, &arg_ptr))
	{
		va_end(arg_ptr);
		return (len);
	}
	process(f, line, &len, &ind, &arg_ptr);

	va_end(arg_ptr);
	return (len);
}
