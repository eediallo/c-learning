#include <stdio.h>

int	main(void)
{
	int	i;
	int	b;

	i = 10;
	b = 10;
	for (i = 1, b = 10; i < 10; i++, b--)
	{
		printf("a: %2d b: %2d\n", i, b);
	}
}
