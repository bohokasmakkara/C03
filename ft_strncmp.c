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
#include <stdio.h>
int main()
{
    char s1[] = "meggyozo";
    char s2[] = "megnez";

    printf("%d", ft_strncmp(s1, s2, 4)); // Compare only the first 4 characters
    return 0;
}
