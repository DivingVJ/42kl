#include <unistd.h>

/* Displays all digits one by one in ascending order */
void	ft_print_numbers(void)
{
	char	c;

	c = '0';
	while (c <= '9')
	{
		write(1, &c, 1);
		c = c + 1;
	}
}
