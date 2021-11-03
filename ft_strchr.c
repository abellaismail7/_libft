
char *strchr(const char *s, int c)
{
	char *str;

	str = (char*) s;
	while(*str)
	{
		if(*str == c)
			return (str);
		str++;
	}
	if(c == 0)
		return (str);
	else	
		return 0;
}
