/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-bel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:36:59 by iait-bel          #+#    #+#             */
/*   Updated: 2021/11/06 15:36:59 by iait-bel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*cur;
	t_list	*last;

	cur = lst;
	last = lst;
	while (cur)
	{
		last = cur;
		cur = cur->next;
	}
	return (last);
}
