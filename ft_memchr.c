
void *ft_memchr(const void *s, int c, unsigned int n)
{
	unsigned int i;
	unsigned char uc;
	unsigned char *str;

	str = (unsigned char*) s;
	uc = c;
	i = 0;
	while(i < n)
	{
		if(str[i] == uc)
			return (str + i);
		i++;
	}
	if(c == 0 && n != 0)
		return (str + i);
	else	
		return 0;
}
