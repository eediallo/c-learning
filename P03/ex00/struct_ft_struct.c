#include <stdio.h>

struct	student
{
	int	age;
	int	level;
	char	name[20];
	char	country[8];	
};

void	show_student_details(struct student d);

int	main(void)
{
	struct student details = {25, 3, "Ousmane Diallo", "Guinea"};
	show_student_details(details);
	return (0);
}

void	show_student_details(struct student d)
{
	puts("Student details");
	printf("Name: %s\nLevel: %d\nAge: %d\nCountry: %s\n", 
			d.name, d.level,d.age, d.country);
}
