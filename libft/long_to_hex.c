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

#include "libft.h"
#include <stdlib.h>

static void	add_digit_to_str(char **str, int h)
{
	if (h < 10)
		**str = '0' + h;
	else if (h == 10)
		**str = 'a';
	else if (h == 11)
		**str = 'b';
	else if (h == 12)
		**str = 'c';
	else if (h == 13)
		**str = 'd';
	else if (h == 14)
		**str = 'e';
	else if (h == 15)
		**str = 'f';
	(*str)++;
}

static void	fill_str(char **str, long l)
{
	int		last;

	last = (int)(l % 16);
	l /= 16;
	if (l != 0)
		fill_str(str, l);
	add_digit_to_str(str, last);
}

char		*long_to_hex0x(long l)
{
	char	*str;
	char	*res;

	str = malloc(11);
	res = str;
	str[0] = '0';
	str[1] = 'x';
	str += 2;
	if (l == 0)
	{
		*str = '0';
		*(str + 1) = 0;
	}
	else
	{
		fill_str(&str, l);
		*str = 0;
	}
	return (res);
}

char		*long_to_hex(long l)
{
	char	*str;
	char	*res;

	str = malloc(9);
	res = str;
	if (l == 0)
	{
		*str = '0';
		*(str + 1) = 0;
	}
	else
	{
		fill_str(&str, l);
		*str = 0;
	}
	return (res);
}
