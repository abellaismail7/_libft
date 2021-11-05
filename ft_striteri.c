
void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int i;

	if (s == 0)
		return ;
	i = 0;
	while(s[i])
	{
		f(i, s + i);
		i++;
	}
}
