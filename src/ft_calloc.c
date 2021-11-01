void *calloc(size_t count, size_t size)
{
	void	*mem;
	int		i;

	mem = malloc(size);
	i = 0;
	while(i < size)
		mem[i++] = 0;	
	
	return (mem);
}
