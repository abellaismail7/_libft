char	*ft_tolower(char *str)
{
	char	c;
	int		i;

	i = 0;
	while (str[i])
	{
		c = str[i];
		if (c >= 'A' && c <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}
