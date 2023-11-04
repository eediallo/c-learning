#include <stdio.h>

void	auto_var_sum(void)
{
	auto int	a;
	auto int	b;

	a = 10;
	b = 40;
	printf("sum of a and b is: %d\n", a + b);
}

int	main(void)
{
	printf("Calling the sum function\n");
	auto_var_sum();
	return (0);
}
