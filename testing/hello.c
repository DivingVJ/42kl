#include <stdio.h>
int	main(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			printf("Count %d%d ", i, j);
			j++;
		}
		printf("\n");
		i++;
	}
	return (0);
}
