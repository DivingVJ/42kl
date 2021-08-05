#include <unistd.h>
#include <stdio.h>
#include <string.h>

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
	printf("Null pos %d \n", i);
	dest[i] = '\0';
	while (src[i] != '\0')
	{
		i++;
	}
	printf("Source %s \n", src);
	printf("Dest %s \n", dest);
	return (i);
}

int	main(void)
{
	char			src[] = "HelloGoodbyeMyShipmates";
	char			dest[100];
	char			dest1[100];
	unsigned int	srcsize;
	unsigned int	destsize;

	destsize = 10;
	srcsize = ft_strlcpy(dest, src, destsize);
	printf("ori %s \n", strlcpy(dest1, src, destsize));
	printf("Srcsize = %d \n", srcsize);
	return (0);
}
