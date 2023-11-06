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
			{{ 9, 14, 1901}, {"Thordore Roosevelt"}}},
			temp;

void	show(struct person p[])
{
	int	i;

	i = 0;
	puts("Presidents");
	for (; i < 4; i++)
		printf("President %s took office on %d/%d/%d\n",
			p[i].name, 
		       	p[i].tookoffice.month,
		       	p[i].tookoffice.day,
		       	p[i].tookoffice.year);
}

int	main(void)
{
	/*show presidents data*/
	show(president);
	//struct	person temp;
	/*Swap 2 and 3*/
	puts("Swapping....");
	temp = president[1];
	president[1] = president[2];
	president[2] = temp;
	show(president);
	return (0);
}
