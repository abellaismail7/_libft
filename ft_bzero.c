
void	ft_bzero(void *s, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while(i < n)
	{
		*(s + i) = 0;
		i++;
	}
}
