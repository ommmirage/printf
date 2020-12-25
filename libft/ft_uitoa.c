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

#include <stdlib.h>

static int	ft_len(unsigned int n)
{
	int	len;

	if (n > 0)
		len = 0;
	else
	{
		len = 1;
		n *= -1;
	}
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char		*ft_uitoa(unsigned int n)
{
	char	*str;
	int		len;
	int		first_symbol;

	len = ft_len(n);
	str = malloc(sizeof(char) * (len + 1));
	str[len] = 0;
	first_symbol = 0;
	while (len-- > first_symbol)
	{
		str[len] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
