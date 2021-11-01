
size_t ft_strlen(char *str)
{
	size_t count;

	count = 0;
	while (str[count])
		count++;

	return count;

}
