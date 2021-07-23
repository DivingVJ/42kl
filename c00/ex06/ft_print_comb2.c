#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/* Displays 2 digit number as 2 single characters */
void	printnum(int a)
{
	int	i;
	int	j;

	i = a / 10;
	j = a % 10;
	ft_putchar(i + '0');
	ft_putchar(j + '0');
}

/* Generates two 2 digit numbers in ascending order */
/* The 2 digits are in ascending order too */
void	ft_print_comb2(void)
{
	int	first_nbr;
	int	second_nbr;
	int	sw;	

	sw = 0;
	first_nbr = 0;
	while (first_nbr <= 99)
	{
		second_nbr = first_nbr + 1;
		while (second_nbr <= 99)
		{
			if (sw == 1)
			{
				write(1, ", ", 2);
			}
			printnum(first_nbr);
			ft_putchar(' ');
			printnum(second_nbr);
			second_nbr++;
			sw = 1;
		}
		first_nbr++;
	}
	write(1, "\n", 2);
}
