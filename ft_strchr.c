
char *ft_strchr(const char *s, int c)
{
	unsigned char uc;
	char *str;

	str = (char*) s;
	uc = c;
	while(*str)
	{
		if(*str == uc)
			return (str);
		str++;
	}
	if(uc == 0)
		return (str);
	else	
		return 0;
}
