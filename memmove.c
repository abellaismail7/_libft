
void *ft_memmove(void *dst, const void *src, unsigned int n)
{
	char *_dst;
	char *_src;
	unsigned int	i;

	_dst = (char *) dst;
	_src = (char *) src;

	if (_dst > _src)
	{
		i = n;
		while(i--)
		{
			_dst[i] = _src[i];
		}
	}
	else {
		i = 0;
		while(i < n)
		{
			_dst[i] = _src[i];
			i++;
		}
	}
	return dst;
}
