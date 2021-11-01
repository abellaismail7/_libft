
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;
	int	j;

	if (n == 0)
		return (0);
	i = 0;
	j = n - 1;
	while (s1[i] && s1[i] == s2[i] && i < j)
		i++;
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}
