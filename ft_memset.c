
void *ft_memset(void *b, int c, unsigned int len)
{
	unsigned int i;
	unsigned char uc;
	unsigned char *s;

	i = 0;
	s = b;
	uc = (unsigned char) c;
	while(i < len)
	{
		s[i] = uc;
		i++;
	}
	return b;
}
