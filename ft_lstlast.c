#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	t_list	*cur;

	cur = lst;
	while (cur->next)
	{
		cur = cur->next;
	}

	return cur; 
}
