
char *ft_strrchr(const char *s, int c)
{
	unsigned char uc;
	char *last;

	last = 0;
	uc = c;
	while(*s)
	{
		if(*s == uc)
			last = (char*) s;
		s++;
	}
	if(uc == 0)
		return (char*)s;
	else
		return (last);
}
