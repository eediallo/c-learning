#include <unistd.h>
#include <stdio.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int ac, char **av)
{
	int	end;
	int	len_av;

	if (ac == 2)
	{
		len_av = str_len(av[1]);
		end = len_av - 1;
		while (end >= 0)
		{
			write (1, &av[1][end], 1);
			end--;
		}
		write (1, "\n", 1);
	}
	return (0);
}
