#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list *cur;
	t_list *tcur;

	cur = lst;
	while(cur)
	{
		tcur = cur->next;
		f(cur->content);
		cur = tcur;
	}
}
