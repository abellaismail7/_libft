
void *ft_memcpy(void *dst, const void *src, unsigned int n)
{
	char *_dst;
	const char *_src;
	unsigned int	i;

	_dst = (char *) dst;
	_src = (char *) src;
	i = 0;
	while (i < n)
	{
		_dst[i] = _src[i];
		i++;
	}
	return dst;
}
