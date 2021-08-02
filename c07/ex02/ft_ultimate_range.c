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

int	ft_ultimate_range(int **range,int min,int max)
{
//	int		*range;
	int		size;
	int		i;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		*range = NULL;
   		return (0);
	}

	*range = (int *)malloc(sizeof(int) * (size + 1));
	if (*range == '\0')
	{
		return (-1);
	}
	while (i < size )
	{
		*range[i] = min;
		min++;
		i++;
	}
	*range[i] = '\0';
	return (size);
}

#include <stdio.h>
int	main(void)
{
	int		i;
	int		min;
	int		max;
	int		size;
	int		*range;

	i = 0;
min = 5;
max = 10;
	printf("min max %d %d \n", min, max);
size = ft_ultimate_range(&range, min, max);

printf("Size  %d \n", size);

	return (0);
}
