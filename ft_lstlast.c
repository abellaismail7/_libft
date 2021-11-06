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

//#include<stdio.h>
//int main()
//{
//	t_list *head = ft_lstnew((void*)1);
//
//	t_list *last = ft_lstlast(head);
//	printf("%d", (char ) last->content );
//	ft_lstadd_back(&head, ft_lstnew((void*)2));
//	last = ft_lstlast(head);
//	printf("%d", (char ) last->content );
//	ft_lstadd_back(&head, ft_lstnew((void*)3));
//	last = ft_lstlast(head);
//	printf("%d", (char ) last->content );
//	ft_lstadd_back(&head, ft_lstnew((void*)4));
//	last = ft_lstlast(head);
//	printf("%d", (char ) last->content );
//	ft_lstadd_back(&head, ft_lstnew((void*)7));
//	last = ft_lstlast(head);
//	printf("%d", (char ) last->content );
//
//}
