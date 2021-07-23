/* Checks string for numbers (0-9) and returns 1 through the function */
/* Uses switch sw to indicate if an illegal character has been detected */
/* Returns 1 for an empty string (st = '\0'). Otherwise just returns 0 */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	sw;

	sw = 0;
	i = 0;
	if (*str == '\0')
	{
		sw = 1;
		return (sw);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			sw = 1;
		}
		else
		{
			sw = 0;
			return (sw);
		}
		i = i +1;
	}
	return (sw);
}
