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

static int	ft_atoi2(const char *str, int grade, int sign)
{
	int res;

	res = 0;
	while (*str >= '0' && *str <= '9')
	{
		res += (*str++ - '0') * grade;
		grade /= 10;
	}
	return (res * sign);
}

int			ft_atoi(const char *str)
{
	int			sign;
	const char	*s2;
	int			grade;

	while (ft_isspace_bonus(*str))
		str++;
	sign = 1;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	if (*str == 0)
		return (0);
	s2 = str;
	if (*s2 >= '0' && *s2++ <= '9')
		grade = 1;
	while (*s2 >= '0' && *s2++ <= '9')
		grade *= 10;
	return (ft_atoi2(str, grade, sign));
}
