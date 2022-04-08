#include <unistd.h>
void	ft_putchar(char c);

//Case 1 - Main Line
void	case_1(int a)
{
	int	counter1;

	counter1 = 0;
	while (counter1 < a)
	{
		counter1++;
		if (counter1 == 1)
		{
			ft_putchar('A');
		}
		else
		{
			if (counter1 == a)
			{
				ft_putchar('C');
			}
			else
			{
				ft_putchar('B');
			}
		}
	}
}

//Case 2 -Intermediate Line
void	case_2(int b)
{
	int		counter2;

	counter2 = 0;
	 while (counter2 < b)
	{
		counter2++;
		if (counter2 == 1)
		{
			ft_putchar('B');
		}
		else
		{
			if (counter2 == b)
			{
				ft_putchar('B');
			}
			else
			{
				ft_putchar(' ');
			}
		}
	}
}

//Case 3 - Ending Line
void	case_3(int c)
{
	int	counter3;

	counter3 = 0;
	while (counter3 < c)
	{
		counter3++;
		if (counter3 == 1)
		{
			ft_putchar('C');
		}
		else
		{
			if (counter3 == c)
			{
				ft_putchar('A');
			}
			else
			{
				ft_putchar('B');
			}
		}
	}
}

void	rush(int x, int y)
{
	int	height;

	height = 1;
	if (y > 0)
	{
		case_1(x);
		ft_putchar('\n');
		while (height < y)
		{
			height++;
			if (height == y)
			{
				case_3(x);
				ft_putchar('\n');
			}
			else
			{
				case_2(x);
				ft_putchar('\n');
			}	
		}
	}
}
