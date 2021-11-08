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

static t_list	*del_lstel(t_list *last, t_list *cur, void (*del)(void *))
{
	t_list	*next;

	next = cur->next;
	if (last)
		last->next = cur->next;
	del(cur->content);
	free(cur);
	if (last)
		return (last);
	else
		return (next);
}

static t_list	*append_lst(t_list **new, t_list *ncur, void *content)
{
	if (*new == 0)
	{
		ncur = ft_lstnew(content);
		*new = ncur;
	}
	else
	{
		ncur->next = ft_lstnew(content);
		ncur = ncur->next;
	}
	return (ncur);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),
void (*del)(void *))
{
	t_list	*cur;
	t_list	*ncur;
	t_list	*last;
	t_list	*new_lst;
	void	*content;

	new_lst = 0;
	cur = lst;
	last = 0;
	while (cur)
	{
		content = f(cur->content);
		if (content == 0)
			cur = del_lstel(last, cur, del);
		else
			ncur = append_lst(&new_lst, ncur, content);
		last = cur;
		cur = cur->next;
	}
	return (new_lst);
}
