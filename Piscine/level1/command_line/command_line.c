#include <stdio.h>

int	main(int agc, char **av)
{
	int	i;

	i = 1;
	if (agc == 1)
		printf("Argument name: %s\n", av[0]);
	else if (agc == 2)
	       printf("One command line argument passed: %s\n", av[1]);
	else
	{
		printf("More command line argc supplied: \n");
		for (i = 1; i < agc; i++)
		{
			printf("%s\n", av[i]);
		}
	}
}
