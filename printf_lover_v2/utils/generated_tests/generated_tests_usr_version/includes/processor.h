//
// Created by Dewitt Chanell on 12/25/20.
//

#ifndef PRINTF_PROCESSOR_H
#define PRINTF_PROCESSOR_H

# include "printf.h"
# include <unistd.h>

int		di(t_format f, int num);
void	width_spaces_before(t_format f, int *printed_count, int len);
void	width_zeroes_before(t_format f, int *printed_count, int len);
void	write_minus(int *minus, int *printed_count);
void	precision_zeroes(int precision, int num_len, int *printed_count);
void	write_num(int num, int num_len, t_format f, int *printed_count);
void	width_spaces_after(t_format f, int *printed_count);
int		u(t_format f, unsigned int num);
int		c(t_format f, int int_char);
int		s(t_format f, const char *str);
void	print_str(t_format f, const char *str, int str_len, int *printed_count);
void	width_before(t_format f, int *printed_count, int len);
int		p(t_format f, long p);
int		x(t_format f, unsigned int num);
int		XX(t_format f, unsigned int num);

#endif
