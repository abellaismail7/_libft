
void *memcpy(void *dst, const void *src, size_t n)
{
	int	i;

	if ( dest == NULL || src == NULL)
		return dest;
	while(i < n)
	{
		dst[i] = src[i];
		i++;
	}
	return dst;
}
