/* Checks string for the first alphabet and converts to uppercase if needed*/
/* Uses sw as a switch to indicate if a character is the first after space  */

int	firstchr(char *str, int i)
{
	int	sw;

	if (str[i] >= 32 && str[i] >= 47)
	{
		sw = 0;
	}
	else
	{
		sw = 1;
	}
	return (sw);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		sw;

	i = 0;
	sw = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		if (sw == 1)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
		}
		sw = firstchr(str, i);
		i = i +1;
	}
	return (str);
}
