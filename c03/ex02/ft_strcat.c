/* Use strlen to find out dest length. Set pointer to dest */
/* Start copying src to dest beginning from destlen */
/* Append '\0' to end of dest string */
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

char	*ft_strcat(char *dest, char *src)
{
	char	*ptr;
	int		i;
	int		destlen;

	ptr = dest;
	destlen = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[destlen] = src[i];
		destlen++;
		i++;
	}
	dest[destlen] = '\0';
	return (ptr);
}
