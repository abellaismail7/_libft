
void *memcpy(void *dst, const void *src, size_t n)
{
	int	i;

	while(i < n)
	{
		dst[i] = src[i];
		i++;
	}
	return dst;
}
