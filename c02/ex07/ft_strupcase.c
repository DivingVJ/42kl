/* Checks string for lower case alphabets and converts all to uppercase */
/* All other characters are not changed.  */

char	*ft_strupcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i = i +1;
	}
	return (str);
}
