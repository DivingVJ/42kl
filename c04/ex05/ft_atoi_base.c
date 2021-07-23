#include <unistd.h>
#include <stdio.h>

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

char	check_str(char *str, char *base, int i)
{
	int	j;

	while (str[i] != '\0')
	{
		j = 0;
		while (base[j] != '\0')
		{
			if (str[i] == base[j])
				return (base[j]);
		}
	}
	return (0);
}

void	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	j;
	int	negsign;
	int	num;

	i = 0;
	negsign = 1;
	if (check_base(base) == 1)
	{
		while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		{
			i++;
		}	
		while ((str[i] == 45 || str[i] == 43) && str[i] != '\0')
		{
			if (str[i] == 45)
				negsign = negsign * -1;
			i++;
		}
		while ((check_str(str, base, i)) != '0')
		{
			num = num + (check_str(str, base, i) - base);
			i++;
		}
	}
}
