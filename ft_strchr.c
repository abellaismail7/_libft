
char *strchr(const char *s, int c)
{
	c = (char) c;
	while(*s)
	{
		if(*s == c)
			return (s);
		s++;
	}
	if(c == 0)
		return (s);
	else	
		return 0;
}
