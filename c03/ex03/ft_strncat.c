/* Use strlen to find out dest length. */
/* Copy first n characters of  src to dest beginning from destlen */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				destlen;

	destlen = 0;
	destlen = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0' && i < nb)
	{
		dest[destlen] = src[i];
		destlen +=1;
		i +=1;
	}
	dest[destlen] = '\0';
	return (dest);
}
