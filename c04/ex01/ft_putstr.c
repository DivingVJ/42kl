#include <unistd.h>
void	ft_putstr(char *dest)

{
	int	count;

	count = 0;
	while (dest[count] != '\0')
	{
		write(1, &dest[count], 1);
		count++;
	}
	return ;
}
