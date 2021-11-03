
char *strchr(const char *s, int c)
{
	char *last;

	last = 0;
	while(*s)
	{
		if(*s == c)
			last = (char*) s;
		s++;
	}
	if(c == 0)
		return (char*)s;
	else
		return (last);
}
