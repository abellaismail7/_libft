/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-bel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:37:36 by iait-bel          #+#    #+#             */
/*   Updated: 2021/11/06 15:37:36 by iait-bel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*cur;

	if (lst == 0)
		return (0);
	count = 1;
	cur = lst;
	while (cur->next)
	{
		cur = cur->next;
		count++;
	}
	return (count);
}
