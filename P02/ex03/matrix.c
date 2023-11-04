#include <stdio.h>
#include <unistd.h>

# define MAX 3

int	main(void)
{
	int	matrix[MAX][MAX] = {{2,1,0}, {6,5,4},{4,9,7}};
	int	i;
	int	j;
	int	rows;
	int	cols;

	i = 0;
	printf("Enter the size of your matrix: ");
	scanf("%d %d", &rows, &cols);
	while (i < rows)
	{
		j = 0;
		while (j < cols)
		{
			printf("%3d", matrix[i][j]);
			j++;
		}
		putchar('\n');
		i++;
	}

}
