#include "libft.h"
#include <stdlib.h>

int min(int a, int b)
{
	if(a > b)
		return b;
	else
		return a;
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *res;
	int i;
	int size;

	unsigned int s_len = ft_strlen(s);
	if(start >= s_len )
		return 0;
	size = min(s_len, len) - start;
	res = malloc(size * sizeof(char) + 1);
	if (res == 0)
		return 0;
	res[size] = 0;
	i = 0;
	while (i < size)
	{
		res[i] = s[start + i];
		i++;
	}
	return res;
}
