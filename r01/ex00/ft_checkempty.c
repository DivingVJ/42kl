#include <unistd.h>
#include "header.h"

int	ft_checkempty(int *clue)
{
	int	empty;

	if (clue[0] == '\0')
		empty = 1;
	else
		empty = 0;
	return (empty);
}
