unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = size - 1;
	while (dest[i])
		i++;
	k -= i;
	while (src[j])
	{
		if (j < k)
			dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = 0;
	if (i < (int) size)
		return (j + i);
	else
		return (j + size);
}
