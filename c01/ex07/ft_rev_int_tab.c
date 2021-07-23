/* This function reverses the content of an array */
/* Swaps the first and last element of the array */
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)

{
	int		temp;
	int		start;
	int		end;

	start = 0;
	end = size - 1;
	while (start <= end)
	{
		temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;
		start = start + 1;
		end = end - 1;
	}
}
