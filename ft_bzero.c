
void	ft_bzero(void *s, unsigned int n)
{
	unsigned int	i;
	char *str = s;

	i = 0;
	while(i < n)
	{
		str[i] = 0;
		i++;
	}
}
