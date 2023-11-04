#include <unistd.h>

int	main(int ac, char **av)
{
	int	j;
	int	replace;
	char	c;

	j = 0;
	if (ac == 2)
	{
		while (av[1][j])
		{
			c = av[1][j];
			while((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
			{
				if( c >= 'a' && c <= 'z')
					replace = c - 13;
				if( c >= 'A' && c <= 'Z')
					replace = c - 13;
			}
			write (1, &c, 1);
			replace--;
		}
		write(1, &c, 1);
		j++;
	}
	write(1, "\n", 1);
	return (0);
}
