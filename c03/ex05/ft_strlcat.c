/* Concatenates the characters from src to dest. Stops at destsize-1  */
/* Adds \0 at the end of dest to signal end of string */
/* Returns destlen plus source size to indicate if truncation has occured */

unsigned int	ft_strlen(char *str)
{
	unsigned int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	k;
	unsigned int	destlen;
	unsigned int	srcsize;

	i = 0;
	destlen = ft_strlen(dest);
	srcsize = ft_strlen(src);
	k = destlen;
	while (k < (size - 1) & src[i] != '\0')
	{
		dest[k] = src[i];
		k++;
		i++;
	}
	dest[k] = '\0';
	return (destlen + srcsize);
}
