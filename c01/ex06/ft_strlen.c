/* Returns the length of a char string */
int	ft_strlen(char *str)

{
	int	length;

	if (!str)
	{
		return (0);
	}
	length = 0;
	while (*str != '\0')
	{
		length = length + 1;
		str = str + 1;
	}
	return (length);
}
