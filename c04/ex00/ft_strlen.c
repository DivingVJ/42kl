int	ft_strlen(char *dest)

{
	int	count;

	count = 0;
	while (dest[count] != '\0')
	{
		count++;
	}
	return (count);
}
