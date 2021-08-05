#include <stdio.h>
/* Checks string for the first alphabet and converts to uppercase if needed*/
/* Uses sw as a switch to indicate if a character is the first after space  */

int	char_range(char *str, int i, int start, int end)
{
	if (str[i] >= start && str[i] <= end)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	not_word(char *str, int i)
{
	if (char_range(str, i, 65, 90))
	{
		return (0);
	}
	else if (char_range(str, i, 97, 122))
	{
		return (0);
	}
	else if (char_range(str, i, 48, 57))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		if (not_word(str, i - 1) == 1)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
		}
		i = i + 1;
	}
	return (str);
}

int	main(void)
{
	char	tab[] = "  get ,a :gUn no54w  ";

	printf("%s \n", ft_strcapitalize(tab));
	return (0);
}
