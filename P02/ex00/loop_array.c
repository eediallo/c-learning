#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	main(void)
{
	int	x;

	x = 0;
	float array[] = {4.0,5.9,8.4,9.8,10.9};
	for(;x < 5; x++)
	{
		printf("#%d : %lf\n", x+1, array[x]);
	}
	return (0);
}
/*
int	main(void)
{
	array_loop();
	return (0);
}*/
