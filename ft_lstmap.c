/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-bel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:24:44 by iait-bel          #+#    #+#             */
/*   Updated: 2021/11/06 15:24:44 by iait-bel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),
void (*del)(void *))
{
	t_list	*cur;
	t_list	*ncur;
	t_list	*new_lst;

	new_lst = 0;
	cur = lst;
	while (cur)
	{
		ncur = ft_lstnew(f(cur->content));
		if (ncur == 0)
		{
			ft_lstclear(&new_lst, del);
			break ;
		}
		else
			ft_lstadd_back(&new_lst, ncur);
		cur = cur->next;
	}
	return (new_lst);
}
