#include <stdio.h>
//#include <stdlib.h>

/* reproduce the behavior the strlen funciton*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

int	main(void)
{
	char	str[] = "Abdoul is great man";
	int	len;

	len = ft_strlen(str);
	printf("The length of the string is: %d\n", len);
	return (0);
}
