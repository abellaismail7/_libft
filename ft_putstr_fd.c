#include <unistd.h>
#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
	int len;

	if(s == 0)
		return ;
	len = ft_strlen(s);
	write(fd, s, len);
}
