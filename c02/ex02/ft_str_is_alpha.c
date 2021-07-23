/* Checks string for alphabets (a-z,A-Z) and returns 1 through the function */
/* Here I am using ASCII A = 65 a = 97 z = 90 Z = 122  */
/* Uses switch sw to indicate if an illegal character has been detected */
/* Returns 1 for an empty string (st = '\0'). Otherwise just returns 0 */

int	ft_str_is_alpha(char *str)
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
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
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
