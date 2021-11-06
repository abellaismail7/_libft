#include<stdlib.h>
#include "libft.h"
#include<stdio.h>
char *ft_strjoin(char const *s1, char const *s2)
{
	int s1_len;
	int s2_len;
	char *str;

	if (s1 == 0)
		return 0;	
	s1_len = ft_strlen(s1);
	s2_len = 0;
	if (s2)
		s2_len = ft_strlen(s2);

	str = malloc(s1_len + s2_len + 1);
	if(str == 0)
		return 0;
	ft_strlcpy(str, s1, s1_len +1);
	ft_strlcpy(str + s1_len, s2, s2_len +1);
	return str;
}
