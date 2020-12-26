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

int	ft_u_len(unsigned int num)
{
	int num_len;

	if (num == 0)
		return (1);
	num_len = 0;
	while (num != 0)
	{
		num_len++;
		num /= 10;
	}
	return (num_len);
}
