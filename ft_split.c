#include<stdlib.h>

int	split_counter(char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && c != str[i])
			i++;
		while (c && c == str[i])
			i++;
		count++;
	}
	return (count);
}

int	word_counter(char *str, char c)
{
	int	count;

	count = 0;
	while (*str && c != *str)
	{
		count++;
		str++;
	}
	return (count);
}

char	*create_word(char *str, char c, char **word)
{
	int	wcount;
	int	j;

	wcount = word_counter(str, c);
	*word = malloc(sizeof(char) * (wcount + 1));
    if(*word == 0)
       return 0;
	(*word)[wcount] = 0;
	j = 0;
	while (j < wcount)
		(*word)[j++] = *str++;
	while (c && c == *str)
		str++;
	return (str);
}

void free_split(char **result, int size)
{
   while(size--)
   {
      free(result[size]);
   }
   free(result);
}

char	**ft_split(char *str, char c)
{
	char	**result;
	int		spcount;
	int		i;

    if (str == 0)
       return 0;

	while (c && *str && c == *str)
		str++;
	spcount = split_counter(str, c);
	result = malloc(sizeof(char *) * (spcount + 1));
	if (!result)
		return (0);
	result[spcount] = 0;
	i = 0;
	while (i < spcount)
	{
		str = create_word(str, c, result + i);
        if(str == 0)
        {
           free_split(result, i);
           return 0;
        }
		i++;
	}
	return (result);
}
