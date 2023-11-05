#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_str(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	return (str);
}

struct	house
{
	int	doors;
	int	rooms;
	char	name[20];	
}	 house1 = {20, 40, "Daillo House"}, house2;

int	main()
{
	printf("%s\nTotal doors:%d\nTotal rooms:%d\n", 
			ft_str(house1.name),
				house1.doors,
				house1.rooms);
	putchar('\n');
	house2 = house1;
	house2.rooms = 30;
	strcpy(house2.name, "Aissatou Court");
	printf("%s\nTotal doors:%d\nTotal rooms:%d\n", 
			ft_str(house2.name),
				house2.doors,
				house2.rooms);
	return (0);
	
}
