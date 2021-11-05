#include<stdlib.h>
#include "libft.h"
#include<stdio.h>
char *ft_strjoin(char const *s1, char const *s2)
{
	int s1_len;
	int s2_len;
	char *str;

	s1_len = 0;
	s2_len = 0;
	if (s1)
		s1_len = ft_strlen(s1);
	if (s2)
		s2_len = ft_strlen(s2);
	
	str = malloc(s1_len + s2_len + 1);
	if(str == 0)
		return NULL;
	str[s1_len + s2_len] = 0;
	ft_strlcpy(str, s1, s1_len +1);
	ft_strlcpy(str + s1_len, s2, s2_len +1);
	return str;
}
