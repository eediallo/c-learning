#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	main(void)
{
	int	x;
	float array[5]; 

	x = 0;
	for(;x < 5; x++)
	{
		printf("High score %d:", x+1);
		scanf("%f", &array[x]);
	}
	puts("Here are the high scores :");
	for(x = 0; x < 5; x++)
	{
		printf("#%d : %f\n", x+1, array[x]);
	}
	return (0);
}
/*
int	main(void)
{
	array_loop();
	return (0);
}*/
