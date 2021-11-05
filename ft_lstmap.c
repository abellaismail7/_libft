#include <stdlib.h>
#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),
void (*del)(void *))
{
	t_list *cur;
	t_list *ncur;
	t_list *tcur;
	t_list *new_lst;
	int is_first;

	is_first = 1;
	cur = lst;
	while(cur)
	{
		if(is_first)
		{
			ncur = ft_lstnew(f(cur->content));
			new_lst = ncur;
			is_first = 0;
		}else {
			ncur->next = ft_lstnew(f(cur->content));
			ncur = ncur->next;
		}
		tcur = cur;
		cur = cur->next;
		del(tcur->content);
		free(tcur);
	}
	return new_lst;
}
