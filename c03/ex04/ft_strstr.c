int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count +=1;
	}
	return (count);
}

int	ft_strncmp(char *s1, char *s2, int n)
{
	int	diff;
	int	i;

	i = 0;
	diff = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (i < n)
		{
			if (s1[i] != s2[i])
			{
				diff = s1[i] - s2[i];
				return (diff);
			}
		}
		i++;
	}
	return (diff);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	find_len;

	find_len = ft_strlen(to_find);
	if (find_len == 0)
	{
		return (str);
	}
	while (*str)
	{
		if (ft_strncmp(str, to_find, find_len) == 0)
		{
			return (str);
		}
		str++;
	}
	return (0);
}
