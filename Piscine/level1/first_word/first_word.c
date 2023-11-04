#include <unistd.h>

int	main(int agc, char **av)
{
	int	j;

	j = 0;
	if (agc == 2)
	{
		while(av[1][j] == 32 || av[1][j] == 9)
			j++;
		while((av[1][j] != 32 && av[1][j] != 9)
			&& av[1][j] != '\0')
		{
			write (1, &av[1][j], 1);
			j++;
		}

	}
	write(1, "\n", 1);
	return (0);
}
