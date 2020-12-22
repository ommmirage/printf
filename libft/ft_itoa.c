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

static int	ft_len(int n)
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

static char	*ft_min_int(void)
{
	char	*str;

	if (!(str = malloc(sizeof(char) * 12)))
		return (NULL);
	str[0] = '-';
	str[1] = '2';
	str[2] = '1';
	str[3] = '4';
	str[4] = '7';
	str[5] = '4';
	str[6] = '8';
	str[7] = '3';
	str[8] = '6';
	str[9] = '4';
	str[10] = '8';
	str[11] = 0;
	return (str);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		first_symbol;

	if (n == -2147483648)
		return (ft_min_int());
	len = ft_len(n);
	if (!(str = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	str[len] = 0;
	first_symbol = 0;
	if (n < 0)
	{
		*str = '-';
		first_symbol = 1;
		n *= -1;
	}
	while (len-- > first_symbol)
	{
		str[len] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
