int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0)
	{
		return (1);
	}
	else
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
}

/*#include <stdio.h>

int main(void) 
{
	int i;

	i = ft_recursive_factorial(12);
	printf("Result = %d \n", i);
	return 0;
}*/
