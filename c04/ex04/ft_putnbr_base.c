#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] <= ' ' || base[i] > '~')
			return (0);
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base( int nbr, char *base)
{
	unsigned int	unsgnum;
	unsigned int	blen;

	blen = 0;
	unsgnum = nbr;
	blen = ft_strlen(base);
	if (check_base(base) == 1)
	{
		if (unsgnum < 0)
		{
			ft_putchar('-');
			unsgnum = unsgnum * -1;
		}
		if (unsgnum >= blen)
		{
			ft_putnbr_base(unsgnum / blen, base);
			ft_putnbr_base(unsgnum % blen, base);
		}
		else
		{
			ft_putchar(base[unsgnum]);
		}
	}
}
