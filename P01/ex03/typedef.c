#include <stdio.h>

typedef	float	result;

void	typedef_f(void)
{
	result a; /* assign the value a to the result*/
	a = 23.45;
	printf("The price of lemon has gone from $%f to $%f\n", a, a * 2);
}

int	main(void)
{
	printf("Calling typedef_f function\n");
	typedef_f();
}
