
void *ft_memchr(const void *s, int c, unsigned int n)
{
	unsigned int i;
	char *str;

	str = (char*) s;
	i = 0;
	while(i < n)
	{
		if(str[i] == c)
			return (str + i);
		i++;
	}
	if(c == 0)
		return (str + i);
	else	
		return 0;
}
