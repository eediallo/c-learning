#include <stdio.h>

void	input_output(void)
{
	int	a;
	int	b;

	printf("Type the number of rows (18 max): ");
	scanf("%d", &a);
	b = a * 4;
	printf("Number of rows required: %d\n",b);
}

int	main()
{
	input_output();
	return (0);
}
