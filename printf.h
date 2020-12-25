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

#ifndef PRINTF_H
# define PRINTF_H

# define FLAGS		"-+ #0"
# define FLAG_NONE	0b00000000
# define FLAG_MINUS	0b00000001
# define FLAG_PLUS	0b00000010
# define FLAG_SPACE	0b00000100
# define FLAG_HASH	0b00001000
# define FLAG_ZERO	0b00010000

# include "libft/libft.h"

typedef struct	s_format{
	int 	flags;
	int		width;
	int 	precision;
	char	type;
	int 	minus;
}				t_format;

int		ft_printf(const char *line, ...);
int 	char_in_str(char c, const char *str);
int		read_flags(const char **line);
int 	get_format(t_format *f, const char **line, va_list *arg_ptr);
char	*get_int_str(const char **line);
void	process(t_format f, int *len, va_list *arg_ptr);
int		int_len(int num);
void	check_double_percent(const char **line, int *len);
int		di(t_format f, int num);
void	write_minus(int *minus, int *printed_count);
void	write_num(int num, int num_len, t_format f, int *printed_count);
int		c(t_format f, int int_char);
int		s(t_format f, const char *str);


#endif