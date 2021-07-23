/* Sorts the int array to ascending order  */
/* Using bubble sort */
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	start;
	int	end;
	int	count;

	count = 0;
	end = size - 1;
	while (count < end)
	{
		start = 0;
		while (start < end)
		{
			if (tab[start] > tab[start + 1])
			{
				temp = tab[start];
				tab[start] = tab[start + 1];
				tab[start + 1] = temp;
			}
			start = start + 1;
		}
		count = count + 1;
	}
}
