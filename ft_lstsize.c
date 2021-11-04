
int ft_lstsize(t_list *lst)
{
	int count;
	t_list	*cur;

	if (lst == 0)
		return 0;
	count = 1;
	cur = *lst;
	while (cur->next)
	{
		cur = cur->next;
		count++;
	}

	return count; 
}
