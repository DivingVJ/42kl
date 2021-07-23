int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power >= 1)
	{
		nb = nb * ft_recursive_power(nb, power - 1);
		return (nb);
	}
	return (1);
}

/*#include <stdio.h>

int	main(void) 
{
	int	i;

	i = ft_recursive_power(5, 5);
	printf("Result = %d \n", i);
	return 0;
}*/