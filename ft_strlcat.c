#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	l_src;
	unsigned int	l_dest;

	l_src = ft_strlen(src);
	l_dest = ft_strlen(dest);
	if (size == 0)
		return (l_src);
	i = l_dest;
	j = 0;
	if (size <= i)
		return (l_src + size);
	while (src[j] && i < size - 1)
		dest[i++] = src[j++];
	dest[i] = 0;
	return (l_dest + l_src);
}
