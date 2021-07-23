#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/* Recursive call to print out digits based on no of digits */
int	ft_print_combn(int n)
{
	if (n > 1)
	{
		n = n - 1;
		ft_putchar(n + '0');
		write(1, ", ", 2);
		ft_print_combn(n);
		return (0);
	}
	else
	{
		return (0);
	}
}
