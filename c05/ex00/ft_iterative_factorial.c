int	ft_iterative_factorial(int nb)
{
	int	i;

	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	i = nb - 1;
	while (i > 0)
	{
		nb = nb * i;
		i--;
	}
	return (nb);
}

/*#include <stdio.h>

int main() 
{
	int i;

	i = ft_iterative_factorial(10);
	printf("Result = %d \n", i);
	return 0;
}*/
