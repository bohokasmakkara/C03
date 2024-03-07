char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
#include <stdio.h>
int main()
{
char str[] = "vaj";
char dest[20] = "mogyoro"; //have to make sure that there is enough space for concatenation

printf("%s", ft_strcat(dest, str));
    
    return (0);
}
