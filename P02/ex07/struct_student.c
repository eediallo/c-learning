#include <stdio.h>
#include <string.h>

struct	registration
{
	int	month;
	int	day;
	int	year;
};

struct	person
{
	struct registration date;
	char	name[30];
};

int	main()
{
	struct person student;

	student.date.month = 4;
	student.date.day = 12;
	student.date.year = 2023;
	strcpy(student.name, "Abdoul Diallo");
	printf("The student %s was registered on %d/%d/%d", 
			student.name, 
			student.date.day, 
			student.date.month, student.date.year);
	putchar('\n');

	return (0);
}
