#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *last;

	if (new == 0 || *lst == 0)
		return ;

	last = ft_lstlast(*lst);
	
	last->next = new;
	new->next = 0;
}
