char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < nb && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
#include <stdio.h>
int main ()
{
char str[7] = "kenyer";
char dest[100] = "mogyoro"; 

char s1[7] = "kenyer";
char d1[100] = "mogyoro";

printf("%s\n", ft_strncat(dest, str, 5));

printf("%s", strncat(d1, s1, 5));
    
    return (0);
}
