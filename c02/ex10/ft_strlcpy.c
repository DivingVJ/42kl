/* Copies the characters from src to dest. Stops at size-1  */
/* Adds \0 at the end to signal end of string */
/* Returns source size copied to indicate if truncation has occured */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < (size - 1) && src[i] != '\0')
	{
		dest[i] = src[i];
		i = i + 1;
	}
	dest[i] = '\0';
	
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}
