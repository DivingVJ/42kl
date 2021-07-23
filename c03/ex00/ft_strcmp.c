/* Compares s1 & s2 char by char. Stops and returns diff when comes  across */
/* the first different char. Evaluates \0 as a char for unequal length string*/

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
