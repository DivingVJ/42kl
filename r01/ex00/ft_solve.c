#include <unistd.h>
#include "header.h"

int	g_r;
int	g_c;
int	g_num;
int	g_tempr;
int	g_tempc;

void	special(void)
{
	while (g_tempr < G_ROW)
	{
		g_board[g_tempr][g_tempc] = g_num;
		g_tempr++;
		g_num++;
	}
}

void	special2(void)
{
	while (g_tempc < G_COLUMN)
	{
		g_board[g_tempr][g_tempc] = g_num;
		g_tempc++;
		g_num++;
	}
}

void	special3(void)
{
	if (g_c == 0)
	{
		special();
	}
	else if (g_r == 0)
	{
		special2();
	}
}

void	ft_solve(void)
{
	g_r = 0;
	while (g_r < G_ROW)
	{
		g_c = 0;
		while (g_c < G_COLUMN)
		{
			g_tempr = 0;
			g_tempc = 0;
			g_num = 1;
			if (g_input[g_r][g_c] == 1)
				g_board[g_r][g_c] = 4;
			else if (g_input[g_r][g_c] == 4)
			{
				special3();
			}
			g_c++;
		}
		g_r++;
	}
	ft_print();
}
