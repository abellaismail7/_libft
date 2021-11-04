#include <stdlib.h>
#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *cur;
	t_list *tcur;

	cur = *lst;
	while(cur)
	{
		tcur = cur;
		cur = cur->next;
		del(tcur->content);
		free(tcur);
	}
}
