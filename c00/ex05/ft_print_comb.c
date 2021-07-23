#include <unistd.h>

/* Helper function to display 3 digits after checking there are no */
/* similar numbers. sw is to indicate if the first set has been displayed */
void	printnum(char a, char b, char c, int sw)
{
	if (a != b && b != c && c != a)
	{
		if (sw == 1)
		{
			write(1, ", ", 2);
		}	
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
	}
}

/* Generates 3 digits in ascending order */
/* The 3 digits are themselves in ascemding order too */
void	ft_print_comb(void)
{
	char	first;
	char	mid;
	char	last;
	int		sw;

	sw = 0;
	first = '0';
	while (first <= '9')
	{
		mid = first + 1;
		while (mid <= '9')
		{
			last = mid + 1;
			while (last <= '9')
			{
				printnum(first, mid, last, sw);
				sw = 1;
				last++;
			}
			mid++;
		}
		first++;
	}
}
