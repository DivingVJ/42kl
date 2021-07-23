/* Copies a string from src to dest */
/* Adds a \0 at the end of dest */
char	*ft_strcpy(char *dest, char *src)
{
	char	*ptr;
	int		i;

	ptr = dest;
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i = i +1;
	}
	dest[i] = '\0';
	return (ptr);
}
