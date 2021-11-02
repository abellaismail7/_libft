
void *memset(void *b, int c, size_t len)
{
	int i;
	unsigned char uc;
	unsigned char *s = b;

	i = 0;
	uc = (unsigned char) c;
	while(i < len)
	{
		s[i] = uc;
		i++;
	}
}
