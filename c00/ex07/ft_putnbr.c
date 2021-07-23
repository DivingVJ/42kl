#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*  Receives interget and tests for 3 cases :							*/
/*  single digit - converts to char and displays    					*/
/*  2 or more digits - Recursively calls ft_putnbr to display digits	*/
/*                   - Displays last digit as in case 1					*/
/*  -ve numbers - Displays -ve sign and converts nb into +ve no			*/
/*              - Displays digits as in case 1 & 2 above				*/
void	ft_putnbr(int nb)
{
	int		j;

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
