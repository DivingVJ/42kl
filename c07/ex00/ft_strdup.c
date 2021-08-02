#include <stdlib.h>
int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*c;
	int		size;
	int		i;

	i = 0;
	size = ft_strlen(src);
	c = (char *)malloc(sizeof(char) * (size + 1));
	if (c == '\0')
	{
		return (NULL);
	}
	while (src[i] != '\0')
	{
		c[i] = src[i];
		i++;
	}
	c[i] = '\0';
	return (c);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*test;
	char	a[] = "Hello";
	int		i;


	i = 0;
	test = ft_strdup(a);
	printf("s1 %s \n", a);
	printf("s2 %s \n", test);
	printf("Ori %s \n", strdup(a));
	return (0);
}
