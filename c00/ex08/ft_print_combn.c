#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int		j;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	j = 0;
	if ((nb >= 0) && (nb < 10))
	{
		ft_putchar(nb + '0');
	}
	else if (nb >= 10)
	{
		j = nb % 10;
		ft_putnbr(nb / 10);
		ft_putchar(j + '0');
	}
	else
	{
		ft_putchar('-');
		ft_putnbr(nb * -1);
	}
}

/* Recursive call to print out digits based on no of digits */
int	ft_print_combn(int n)
{
	if (n <= 0 || n <= 10)
	{
		return (0);
	}
	n = n - 1;
	ft_putchar(n + '0');
	write(1, ", ", 2);
	ft_print_combn(n);
	return (0);
}

int	main(void)
{
	int	i;

	i = 2;
	ft_print_combn(i);
	return (0);
}
