
int ft_is_equal(char *c1, char *c2)
{
	return (*c1  == *c2);
}

void *ft_memchr(const void *s, int c, unsigned int n)
{
	unsigned int i;
	char *str;

	str = (char*) s;
	i = 0;
	while(i < n)
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
