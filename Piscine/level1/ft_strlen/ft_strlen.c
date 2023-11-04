#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(void)
{
	printf("string len: %d\n", ft_strlen("Abdoul is a great man"));
	return (0);
}
