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

static void	ft_clear_all_next(t_list *lst, void (*del)(void *))
{
	if (lst->next)
		ft_clear_all_next(lst->next, del);
	del(lst->content);
	free(lst);
}

void		ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (!lst)
		return ;
	if ((*lst)->next)
		ft_clear_all_next((*lst)->next, del);
	del((*lst)->content);
	*lst = NULL;
}
