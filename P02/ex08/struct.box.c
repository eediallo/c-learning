#include <stdio.h>

struct	phone
{
	int	volume;
	int	size;
	char	color;
} box[3];

int	main(void)
{
	int	i;

	i = 0;
	box[0].volume = 10;
	box[0].size = 5;
	box[0].color = 'r';
	box[1].volume = 12;
	box[1].size= 9;
	box[1].color = 'y';
	box[2].volume = 14;
	box[2].size = 10;
	box[2].color = 'b';
	for(; i < 3; i++)
	{
		printf("Volume: %d\nSize:%d\nColor:%c\n", 
			box[i].volume, 
			box[i].size, 
			box[i].color);
		putchar('\n');
	}
	return (0);
}

