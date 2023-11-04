#include <stdio.h>
#include <string.h>

struct	Car
{
	char	name[10];
	char	model[10];
	int	year;
};

int	main(void)
{
	struct Car car1;
	struct Car car2;

	strcpy(car1.name, "Toyota");
	strcpy(car1.model, "Yaris10");
	car1.year = 2010;
	puts("Car1 details");
	printf("name: %s\nmodel : %s\nyear: %d", car1.name, car1.model, car1.year);
	car2 = car1;
	car2.year = 2015;
	putchar('\n');
	puts("Car2 details");
	printf("name: %s\nmodel : %s\nyear: %d", car2.name, car2.model, car2.year);
       	putchar('\n');	
}
