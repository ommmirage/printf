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

static char	*ft_trim2(char const *s1, int start, char const *set)
{
	int		stop;
	int		end;
	size_t	i;

	stop = 0;
	end = ft_strlen(s1) - 1;
	while (!stop)
	{
		stop = 1;
		i = 0;
		while (i < ft_strlen(set) && end > start)
		{
			if (set[i++] == s1[end])
			{
				stop = 0;
				end--;
				break ;
			}
		}
	}
	return (ft_substr(s1, start, end - start + 1));
}

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	int		stop;
	int		start;

	if (!s1 || !set)
		return (NULL);
	stop = 0;
	start = 0;
	while (!stop)
	{
		stop = 1;
		i = 0;
		while (i < ft_strlen(set))
			if (set[i++] == s1[start])
			{
				stop = 0;
				start++;
				break ;
			}
	}
	return (ft_trim2(s1, start, set));
}
