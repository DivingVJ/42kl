#include <unistd.h>

/* Determines if an integer is positive or negative. Null is positive */
void	ft_is_negative(int nbr)
{
	if (nbr >= 0)
	{
		write(1, "P", 1);
	}
	else
	{
		write(1, "N", 1);
	}
}
