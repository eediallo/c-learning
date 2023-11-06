#include <stdio.h>
#include <string.h>

struct	date
{
	int	month;
	int	day;
	int	year;
};	

struct	person
{
	struct	date tookoffice;
	char	name[32];
}	president[4];

int	main(void)
{
	int	i;

	i = 0;
	strcpy(president[0].name, "George Washington");
	president[0].tookoffice.month = 4;
	president[0].tookoffice.day = 30;
	president[0].tookoffice.year = 1789;
	strcpy(president[1].name, "Thomas Jefferson");
	president[1].tookoffice.month = 3;
	president[1].tookoffice.day = 4;
	president[1].tookoffice.year = 1801;
	strcpy(president[2].name, "Abraham Lincoln");
	president[2].tookoffice.month = 3;
	president[2].tookoffice.day = 4;
	president[2].tookoffice.year = 1861;
	strcpy(president[3].name, "Theordore Roosevelt");
	president[3].tookoffice.month = 9;
	president[3].tookoffice.day = 14;
	president[3].tookoffice.year = 1901;
	for (; i < 4; i++)
		printf(" %s, %d/%d/%d\n",
			       president[i].name, 
			       president[i].tookoffice.month,
			       president[i].tookoffice.day,
			       president[i].tookoffice.year);
	return (0);
}
