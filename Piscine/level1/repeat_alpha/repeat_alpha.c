#include <unistd.h>

int	main(int argc, char **av)
{
	int	rep;
	char	c;
	int	j;

	j = 0;
	if( argc == 2)
	{
		while(av[1][j])
		{
			c = av[1][j];
			if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
			{
				if(c >= 'a' && c <= 'z')
					rep = c - 'a';
				if(c >= 'A' && c <= 'Z')
					rep = c - 'A';
				while(rep > 0)
				{
					write(1, &c, 1);
					rep--;
				}

			}
			write(1, &c, 1);
			j++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
