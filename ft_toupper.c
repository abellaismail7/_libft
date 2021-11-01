char	*ft_upper(char *str)
{
	char	c;
	int		i;

	i = 0;
	while (str[i])
	{
		c = str[i];
		if (c >= 'a' && c <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}

