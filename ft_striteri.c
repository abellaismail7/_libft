
void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int len;

	i = 0;
	while(s[i])
	{
		f(i, s + i);
		i++;
	}
}
