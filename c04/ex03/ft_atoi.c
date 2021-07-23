int	check_space(char *str, int i)
{
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	return (i);
}

int	int_array_to_int(int *num, int numlen)
{
	int	j;
	int	integer;
	int	mult;

	j = numlen - 1;
	integer = 0;
	mult = 1;
	while (j >= 0)
	{
		integer = integer + mult * num[j];
		mult = mult * 10;
		j--;
	}
	return (integer);
}

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	negsign;
	int	num[20];
	int	numlen;

	i = 0;
	j = 0;
	numlen = 0;
	negsign = 1;
	i = check_space(str, i);
	while ((str[i] == 45 || str[i] == 43) && str[i] != '\0')
	{
		if (str[i] == 45)
			negsign = negsign * -1;
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9') && str[i] != '\0')
	{
		num[j] = str[i] - 48;
		numlen++;
		i++;
		j++;
	}
	return (int_array_to_int(num, numlen) * negsign);
}
