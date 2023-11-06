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
}	president[4] = {{{4, 30, 1789}, {"George Washington"}},
			{{3, 4, 1801}, {"Thomas Jefferson"}},
			{{3, 4, 1861}, {"Abraham Lincoln"}},
			{{ 9, 14, 1901}, {"Thordore Roosevelt"}}};

int	main(void)
{
	int	i;

	i = 0;
	puts("Presidents");
	for (; i < 4; i++)
		printf("President %s took office on %d/%d/%d\n",
			president[i].name, 
		       	president[i].tookoffice.month,
		       	president[i].tookoffice.day,
		       	president[i].tookoffice.year);
	return (0);
}
