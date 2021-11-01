
void *ft_memmove(void *dst, const void *src, size_t n)
{
	int	i;

	if ( dest == NULL || src == NULL)
		return dest;

	if (dst > src)
	{
		i = n;
		while(i--)
		{
			dst[i] = src[i];
			i--;
		}
	}
	else {
		while(i < n)
		{
			dst[i] = src[i];
			i++;
		}
	}
	return dst;
}
