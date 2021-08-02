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

int	*ft_range(int min, int max)
{
	int		*range;
	int		size;
	int		i;

	i = 0;
	size = max - min;
   if (min >= max)
   	return (NULL);

	range = (int *)malloc(sizeof(int) * (size + 1));
	if (range == '\0')
	{
		return (NULL);
	}
	while (i < size )
	{
		range[i] = min;
		min++;
		i++;
	}
	range[i] = '\0';
	return (range);
}

#include <stdio.h>
int	main(void)
{
	int		i;
	int		min;
	int		max;
	int		*num;

	i = 0;
min = 5;
max = 10;
	printf("min max %d %d \n", min, max);
num = ft_range(min, max);
while (num[i] != '\0')
{
	printf("Range  %d \n", num[i]);
	i++;
}
	return (0);
}
