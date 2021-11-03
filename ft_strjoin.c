#include<stdlib.h>

char *ft_strjoin(char const *s1, char const *s2)
{
	int s1_len;
	int s2_len;
	char *str;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	
	str = malloc(s1_len + s2_len + 1);
	ft_strlcpy(str, s1);
	ft_strlcpy(str + s1_len, s2);

	return str;
}
