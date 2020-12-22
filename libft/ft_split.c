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

static struct s_word	next_word(const char *s, char c, int start)
{
	int				i;
	int				is_word;
	struct s_word	w;

	i = start;
	is_word = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			if (!is_word)
				w.start = i;
			is_word = 1;
		}
		else if (is_word)
			break ;
		i++;
	}
	w.end = i;
	w.len = w.end - w.start;
	return (w);
}

static int				count_words(char const *s, char c)
{
	int words;
	int is_word;

	is_word = 0;
	words = 0;
	while (*s)
	{
		if (*s++ == c)
		{
			if (is_word)
				words++;
			is_word = 0;
		}
		else
			is_word = 1;
	}
	if (is_word)
		words++;
	return (words);
}

static void				ft_clear_arr(char **arr, int len)
{
	while (len >= 0)
		free(arr[len--]);
	free(arr);
}

char					**ft_split(char const *s, char c)
{
	char			**arr;
	int				word_num;
	struct s_word	w;
	int				words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	if (!(arr = malloc(sizeof(char *) * (words + 1))))
		return (NULL);
	word_num = 0;
	w.end = 0;
	while (word_num < words)
	{
		w = next_word(s, c, w.end);
		if (!(arr[word_num++] = ft_substr(s, w.start, w.len)))
		{
			ft_clear_arr(arr, word_num - 1);
			return (NULL);
		}
	}
	arr[word_num] = 0;
	return (arr);
}
