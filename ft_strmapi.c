
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int len;
	char *result;

	len = ft_strlen(s);
	result = malloc(sizeof(char) * (len + 1));
	if (result == 0)
		return 0;

	i = 0;
	while( i < len)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	return result;
}
