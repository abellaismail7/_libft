#include<stdlib.h>

void *ft_calloc(unsigned int count, unsigned int size)
{
	char	*mem;
	int		i;
	int		len;

	len = count * size;
	i = 0;
	mem = malloc(len);

	if(mem == 0)
		return 0;
	while(i < len)
		mem[i++] = 0;	
	
	return (mem);
}
