#include "libft.h"
#include <stdlib.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int i;
	int len;
	char *result;

	if (s == NULL)
		return NULL;
	len = ft_strlen(s);
	result = malloc(sizeof(char) * (len + 1));
	if (result == 0)
		return 0;
	result[len] = 0;

	i = 0;
	while( i < len)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	return result;
}
