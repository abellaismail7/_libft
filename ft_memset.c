
void *memset(void *b, int c, size_t len)
{
	int i;
	unsigned char uc;

	i = 0;
	uc = (unsigned char) c;

	while(i < len)
	{
		b[i] = uc;
		i++;
	}
}
