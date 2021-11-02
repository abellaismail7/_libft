
int ft_is_equal(char *c1, char *c2)
{
	return (*c1  == *c2);
}

void *ft_memchr(const void *s, int c, unsigned int n)
{
	int i;
	char *str;

	str = s;
	i = 0;
	while(i < n && str[i])
	{
		if(ft_is_equal(str + i, (char *) &c))
			return (str + i);
		i++;
	}
	if(c == 0)
		return (str);
	else	
		return 0;
}
