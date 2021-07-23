int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (i <= nb && i < 46341)
	{
		if (i * i == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}

/*#include <stdio.h>

int	main(void) 
{
	int	i;

	i = ft_sqrt(2147395600);
	printf("Result = %d \n", i);
	return 0;
}*/
