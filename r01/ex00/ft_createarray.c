#include <unistd.h>
#include "header.h"

void	ft_createarray(int *clue)
{
	int	r;
	int	c;
	int	i;

	r = 0;
	c = 0;
	i = 0;
	while (r < G_ROW)
	{
		while (c < G_COLUMN)
		{
			g_input[r][c] = clue[i];
			i++;
			c++;
		}
		r++;
	}
	ft_solve();
}
