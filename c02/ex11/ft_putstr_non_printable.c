/* Checks string unprintable character - work in progress */
#include <unistd.h>
void	ft_putstr_non_printable(char *str)
{
	int		i;
	int		sw;
	int		temp;
	int		div;
	int		mod;

	i = 0;
	sw = 1;
	while (str[i] != '\0')
	{
		if (sw ==1)
		{
			if (str[i] < 32 && str[i] > 126)
			{
				temp = str[i];
				mod = (temp % 16) + 48;
				div = (temp / 16) + 48;
			}
		}
		i = i +1;
	}
	return ;
}
