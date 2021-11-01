
int	ft_isalpha(int c)
{
	int	is_upp;
	int	is_low;

	is_upp = (c >= 'A' && c <= 'Z');
	is_low = (c >= 'a' && c <= 'z');
	return (is_upp || is_low);
}
