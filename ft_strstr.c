char	* ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (to_find[j] != '\0' && str[i + j] == to_find[j])
		{
			j++;
		}
		if (to_find[j] == '\0')
			return (str + i);
		i++;
	}
	return (NULL);
}
#include <stdio.h>

int main()
{
      char *str = "15 56 898";
    char *to_find = "56 8";
 printf("%s", ft_strstr(str, to_find));
 return (0);
}
