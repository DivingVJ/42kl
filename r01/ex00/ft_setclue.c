#include <unistd.h>
#include "header.h"

void	ft_setclue(char *argv, int clue[G_CLUESIZE])
{
	int	i;
	int	x;
	int	empty;

	i = 0;
	x = 0;
	while (argv[x] != '\0')
	{
		if (argv[x] >= 49 && argv[x] <= 57)
		{
			clue[i] = argv[x] - 48;
			i++;
		}
		x++;
	}
	empty = ft_checkempty(clue);
	if (empty == 1)
		write(1, "Error. Not Integer.\n", 20);
	else
		ft_createarray(clue);
}
