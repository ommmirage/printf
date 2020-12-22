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

# include "libft/libft.h"

typedef struct	s_format{
	int 	flags;
	int		width;
	int 	precision;
	char	type;
	int 	format_len;
}				t_format;

int		ft_printf(const char *line, ...);
int 	char_in_str(char c, const char *str);
void	parse_after_percent(const char *line, int *len, va_list *arg_ptr);
char	*get_int_str(const char *line, int *len, int *format_len);

#endif