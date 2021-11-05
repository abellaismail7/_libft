#include "libft.h"
unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	int	i;
	int	n;

	if(size == 0)
		return ft_strlen(src);
	i = 0;
	n = size - 1;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return ft_strlen(src);
}
