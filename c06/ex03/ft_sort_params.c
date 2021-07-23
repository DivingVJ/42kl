#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	diff;

	diff = 0;
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			diff = *s1 - *s2;
			return (diff);
		}
		s1++;
		s2++;
	}
	return (diff);
}

void	ft_sort_tab(char **tab, int size)
{
	char	*temp;
	int		start;
	int		count;

	count = 1;
	while (count < size)
	{
		start = count + 1;
		while (start < size)
		{
			if (ft_strcmp(tab[count], tab[start]) > 0)
			{
				temp = tab[count];
				tab[count] = tab[start];
				tab[start] = temp;
			}
			start = start + 1;
		}
		count = count + 1;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	if (argc > 1)
	{
		ft_sort_tab(argv, argc);
		while (i < argc)
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				write(1, &argv[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
