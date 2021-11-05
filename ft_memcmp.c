
int ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
	char *str1;
	char *str2;
	int	i;
	int	j;

	str1 = (char *) s1;
	str2 = (char *) s2;
	if (n == 0)
		return (0);
	i = 0;
	j = n - 1;
	while (str1[i] == str2[i] && i < j)
		i++;
	return ((unsigned char) str1[i] - (unsigned char) str2[i]);
}
