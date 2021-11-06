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
	int size;

	if (s == 0)
		return 0;
	unsigned int s_len = ft_strlen(s);
	if(start >= s_len)
		size = 0;
	else
		size = min(s_len, len);
	res = malloc((size + 1) * sizeof(char));
	if (res == 0)
		return 0;
	ft_strlcpy(res, s + start, size + 1);
	return res;
}
