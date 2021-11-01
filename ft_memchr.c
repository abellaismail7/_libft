
void * memchr(const void *s, int c, size_t n)
{
	c = (unsigned char) c;
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
