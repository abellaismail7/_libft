void *ft_memset(void *b, int c, unsigned int len);

void	ft_bzero(void *s, unsigned int n)
{
	ft_memset(s, 0, n);
}
