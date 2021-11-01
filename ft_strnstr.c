
char * strnstr(const char *haystack, const char *needle, size_t len);
{
	int	i;
	int	j;

	if (!*needle)
		return (haystack);
	i = 0;
	while (haystack[i])
	{
		j = 0;
		while (needle[j] && haystack[i + j] == needle[j])
			j++;
		if (!needle[j] || j >= len)
			return (haystack+ i);
		i++;
	}
	return (0);
}
