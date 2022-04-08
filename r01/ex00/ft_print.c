#include <unistd.h>
#include "header.h"

void	ft_print(void)
{
	int		r;
	int		c;
	char	temp;

	r = 0;
	while (r < G_ROW)
	{
		c = 0;
		while (c < G_COLUMN)
		{
			temp = g_board[r][c] + 48;
			write(1, &temp, 1);
			write(1, " ", 1);
			c++;
		}
		write(1, "\n", 1);
		r++;
	}
}
