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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	char	*res2;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		if (!(res = (char *)malloc(sizeof(char))))
			return (NULL);
		*res = 0;
		return (res);
	}
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	if (!(res = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	res2 = res;
	s += start;
	while (len--)
		*res++ = *s++;
	*res = 0;
	return (res2);
}
