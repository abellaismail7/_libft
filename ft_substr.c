#include "libft.h"
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *res;
	int i;
	int size;
	
	size = len - start;
	res = malloc(size * sizeof(char) + 1);
	if (res == 0)
		return 0;
	i = 0;
	while (i < size)
	{
		res[i] = s[start + i];
		i++;
	}
	res[i] = 0;

	return res;
}
