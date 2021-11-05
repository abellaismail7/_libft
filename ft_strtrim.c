#include <stdio.h>
#include "libft.h"
#include<stdlib.h>

//size_t ft_strlen(const char *s)
//{
//	int i;
//
//	i = 0;
//	while(s[i])
//		i++;
//
//	return i;
//}
int	has_char(const char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

char *count_ntrim(char const *s1, char const *set, int *count)
{
	int len;

	len = ft_strlen(s1);
	while(has_char(set, *s1))
	{
		s1++;
		len--;
	}
	while(len-- && !has_char(set, s1[len]))
	{
		(*count)++;
	}
	return (char *) s1;
}

char *ft_strtrim(char const *s1, char const *set)
{
	int		count;
	int		i;
	char	*result;

	s1 = count_ntrim(s1, set, &count);
	printf("%d", count);
	result = malloc(count * sizeof(char) + 1);
	if (result == 0)
		return 0;
	result[count] = 0;
	i = 0;
	while (i < count)
	{
		result[i] = s1[i]; 
		i++;
	}
	return result;
}

int main()
{
	char *s = ft_strtrim(" oo  ppabcdo pd oo  ", " op");
	printf("=> %s\n", s);
}
