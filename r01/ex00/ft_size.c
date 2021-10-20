#include <unistd.h>
#include "header.h"

int	ft_size(char *argv)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (argv[i] != '\0')
	{
		if (argv[i] != 32)
			count++;
		i++;
	}
	return (count);
}
