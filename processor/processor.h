//
// Created by Dewitt Chanell on 12/25/20.
//

#ifndef PRINTF_PROCESSOR_H
#define PRINTF_PROCESSOR_H

# include "../printf.h"
# include <unistd.h>

int		p(t_format f, long p);
int		di(t_format f, int num);
void	write_minus(int *minus, int *printed_count);
void	write_num(int num, int num_len, t_format f, int *printed_count);
int		c(t_format f, int int_char);
int		s(t_format f, const char *str);
void	print_str(t_format f, const char *str, int str_len, int *printed_count);

#endif
