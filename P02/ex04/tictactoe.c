#include <stdio.h>
# define MAX 3

int	main(void)
{
	char	tictactoe[MAX][MAX][MAX];
	int	x;
	int	y;
	int	z;

	// initialization
	x = 0;
	while (x < 3)
	{
		y = 0;
		while(y < 3)
		{
			z = 0;
			while (z < 3)
			{
				tictactoe[x][y][z] = '.';
				z++;
			}
			y++;
		}
		x++;
	}
	/* display tictactoe*/
	puts("Tic Tac Toe");
	x = 0;
	while (x < 3)
	{
		y = 0;
		while(y < 3)
		{
			z = 0;
			while (z < 3)
			{
				printf("%2c",tictactoe[x][y][z]); 
				z++;
				putchar(' ');
			}
			y++;
		}
		x++;
		putchar('\n');
	}
	return (0);
}
