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

#include <unistd.h>
#include "libft.h"

static int	ft_grade(int n)
{
	int	grade;

	if (n < 0)
		n *= -1;
	if (n >= 0 && n <= 9)
		return (1);
	grade = 10;
	while (n > 99)
	{
		grade *= 10;
		n /= 10;
	}
	return (grade);
}

void		ft_putnbr_fd(int n, int fd)
{
	int		grade;
	char	c;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	grade = ft_grade(n);
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	while (grade > 0)
	{
		c = (n / grade) + '0';
		write(fd, &c, 1);
		n %= grade;
		grade /= 10;
	}
}
