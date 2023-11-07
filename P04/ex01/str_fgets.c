#include <stdio.h>

void	str_fget(void)
{
	int	i;
	char	str[20];

	i = 0;
	printf("Please enter your name: ");
	fgets(str, 20, stdin);
	while (i < 20)
	{
		if (str[i] == '\n')
			str[i] = '\0';
		i++;
	}
	printf("Please to meet you %s!\n", str);
}

int	main(void)
{
	str_fget();
	return (0);
}
