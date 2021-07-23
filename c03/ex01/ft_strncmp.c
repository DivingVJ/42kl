/* Compares s1 & s2 char by char. Stops and returns diff when comes  across */
/* the first different char. Evaluates \0 as a char for unequal length string*/
/* Only evaluates the first n characters */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				diff;
	unsigned int	i;

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
