int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while ((*s1 || *s2) && n > 0)
	{
		if (*s1 > *s2)
			return (1);
		else if (*s2 > *s1)
			return (-1);
		s1++;
		s2++;
		n--;
	}
	return (0);
}
