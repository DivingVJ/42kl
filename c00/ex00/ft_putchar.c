#include <unistd.h>

/* Outputs a single character to the standard output from a variable address*/
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
