#include <stdlib.h>
#include "libft.h"

void del_lstel(t_list *last, t_list *cur, void (*del)(void *))
{
	t_list *next;

	
	if (last)
	{
		last->next = cur->next;
	}
	del(cur->content);
	free(cur);
	next = cur->next;
}

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),
void (*del)(void *))
{
	t_list *cur;
	t_list *ncur;
	t_list *last;
	t_list *next;
	t_list *new_lst;
	int is_first;
	void *content;

	is_first = 1;
	cur = lst;
	last = 0;
	while(cur)
	{
		content = f(cur->content);
		if(is_first && content != 0)
		{
			ncur = ft_lstnew(content);
			new_lst = ncur;
			is_first = 0;
		}else if(content != 0) {
			ncur->next = ft_lstnew(content);
			ncur = ncur->next;
		}else{
			next = cur->next;
			del_lstel(last, cur, del);
			cur = next;
		}
		last = cur;
		cur = cur->next;
	}
	return new_lst;
}
