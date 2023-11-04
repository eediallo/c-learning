#include <stdio.h>

int	main()
{
	int	a;
	int	b;

	a = 0;
	printf("Type a positive value:\n");
	scanf("%d", &b);
	while (a < b)
	{
		printf("I must do this %d times\n", b);
		a++;
		if (a == 9)
			break;
	}
	return (0);
}
