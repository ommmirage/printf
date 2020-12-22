/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dechanel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 14:57:10 by dechanel          #+#    #+#             */
/*   Updated: 2020/10/28 15:06:52 by dechanel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*dst2;
	const unsigned char	*src2;

	dst2 = dst;
	src2 = src;
	if (n == 0 || dst == src)
		return (dst);
	if (dst < src)
	{
		while (n--)
		{
			*dst2++ = *src2++;
		}
	}
	else
	{
		while (n > 0)
		{
			*(dst2 + n - 1) = *(src2 + n - 1);
			n--;
		}
	}
	return (dst);
}
