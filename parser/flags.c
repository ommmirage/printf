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

#include "../printf.h"

int	read_flags(const char **line)
{
	int	flags;

	flags = FLAG_NONE;
	while (char_in_str(**line, FLAGS))
	{
		if (**line == '-')
			flags = flags | FLAG_MINUS;
		else if (**line == '+')
			flags = flags | FLAG_PLUS;
		else if (**line == ' ')
			flags = flags | FLAG_SPACE;
		else if (**line == '#')
			flags = flags | FLAG_HASH;
		else if (**line == '0')
			flags = flags | FLAG_ZERO;
		(*line)++;
	}
	return (flags);
}
