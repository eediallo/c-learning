#include <stdio.h>

void	duplicate_array(void)
{
	int	o_array[5] = {1,5,8,9,5};
	int	dup_array[5];
	int	x;

	x = 0;
	while (x < 5)
	{
		dup_array[x] = o_array[x];
		x++;
	}
	x = 0;
	puts("Here are the values of the arrays: ");
	while (x < 5)
	{
		printf("#%d %3d  == %3d", x+1, o_array[x],
				dup_array[x]);
		x++;
		putchar('\n');
	}

}

int	main(void)
{
	duplicate_array();
	return (0);
}

