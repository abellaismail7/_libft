#include <stdio.h>
#include<stdlib.h>

char *count_ntrim(char const *s1, char const *set, int *count)
{
	puts(s1);
	puts(set);
	puts((char *) count);
	return 0;

}

char *ft_strtrim(char const *s1, char const *set)
{
	int		count;
	int		i;
	char	*result;

	s1 = count_ntrim(s1, set, &count);
	result = malloc(count * sizeof(char) + 1);
	result[count] = 0;
	i = 0;
	while (i < count)
	{
		result[i] = s1[i]; 
		i++;
	}
	return result;
}
