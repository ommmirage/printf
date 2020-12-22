/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dechanel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 14:21:19 by dechanel          #+#    #+#             */
/*   Updated: 2020/10/28 14:57:01 by dechanel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t len;

	if (!src)
		return (0);
	len = 0;
	while (*src && len < dstsize - 1 && dstsize != 0)
	{
		*dst++ = *src++;
		len++;
	}
	if (dstsize != 0)
		*dst = 0;
	while (*src++)
		len++;
	return (len);
}
