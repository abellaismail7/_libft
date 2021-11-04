
unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	int	i;
	int	n;

	i = 0;
	n = size - 1;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	i = 0;
	while (src[i])
		i++;
	return (i);
}
