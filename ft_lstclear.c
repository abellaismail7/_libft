/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-bel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 17:45:50 by iait-bel          #+#    #+#             */
/*   Updated: 2021/11/06 17:45:50 by iait-bel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*cur;
	t_list	*tcur;

	cur = *lst;
	while (cur)
	{
		tcur = cur;
		cur = cur->next;
		del(tcur->content);
		free(tcur);
	}
	*lst = NULL;
}
