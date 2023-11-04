#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(void)
{
	int	a;
	int	b;

	a = 12;
	b = 13;
	printf("Original values: a: %d b: %d\n",a,b);
	ft_swap(&a, &b);
	printf("values after swap a: %d b: %d\n",a,b);
	return (0);
}
