#include <stdio.h>

int	main(void)
{
	char	name[32];

	printf("type your name: ");
	fgets(name, 32, stdin);
	printf("Hello, %s", name);
	return (0);
}
