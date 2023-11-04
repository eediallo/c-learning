#include <stdio.h>

int	main(void)
{
	int	artifacts;
	int	paintings;
	int	rooms;
	int	sculptures;

	rooms = 12;
	paintings = 16;
	sculptures = 4;
	artifacts = rooms * (paintings + sculptures);
	printf("Number of artifacts is : %d\n", artifacts);
	return (0);
}
