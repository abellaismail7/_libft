#include<stdlib.h>

int is_space(char c)
{
    return c == ' ';
}

int sp_counter(char *str)
{
    int count = 0;
    while (*str){
        while (*str && !is_space(*str))
            str++;
        while(*str && is_space(*str))
            str++;
        count++;
    }
    return count;
}

char    **ft_split(char *str)
{
	char **result; 
   	int sp_count;
	int j;
	int i;
   	int wc;

    while(is_space(*str))
        str++;
	sp_count = sp_counter(str);
   	result = malloc(sizeof(char*) * (sp_count + 1)); 
   	result[sp_count] = 0;
   	if(!result)
       return NULL;
   	i = 0;
   	while(i < sp_count){
   	     wc = 0;
   	     while(str[wc] && !is_space(str[wc]))
   	         wc++;
   	     
   	     result[i] = malloc(sizeof(char) * (wc + 1));
   	     result[i][wc] = 0;
  	     j = 0;
   	     while(*str && !is_space(*str))
   	     {
   	         result[i][j] = *str;
   	         j++;
   	         str++;
   	     }
   	     while(*str && is_space(*str))
   	         str++;
   	     i++;
   	}
   	return result;
}

