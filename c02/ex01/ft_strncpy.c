/* Copies the first n characters of a string from src to dest */
/* Fills up remaining spaces with '\0' after n characters copied */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char				*ptr;
	unsigned int		i;

	i = 0;
	ptr = dest;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i = i + 1;
	}
	while (dest[i] != '\0')
	{
		dest[i] = '\0';
		i = i + 1;
	}
	return (ptr);
}
