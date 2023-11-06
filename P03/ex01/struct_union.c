#include <stdio.h>
#include <string.h>

struct	structure
{
	int	num;
	float	price;
	char	item[10];
}	item1 = {5, 12.99, "Orange"};
	
union	union_example
{
	int	num;
	float	price;
	char	item[10];
}	item2 = {3};

int	main(void)
{
	puts("Structure data");
	printf("Item: %s\nPrice: %f\nNum: %d\n",
			item1.item, item1.price,
			item1.num);
	putchar('\n');
	puts("Union data");
	printf("Item: %s\nPrice: %f\nNum: %d\n",
			item2.item, item2.price,
			item2.num);
	putchar('\n');
	/*Second difference*/
	printf("sizeof structure: %ld\n", sizeof(item1));
	printf("sizeof union: %ld\n", sizeof(item2));
	/*Access one number at a time*/
	item1.num = 10;
	item1.price = 5.5;
	strcpy(item1.item, "Avocado");
	putchar('\n');
	puts("Structure data");
	printf("Item: %s\n", item1.item);
	printf("Price: %f\n", item1.price);
	printf("Num: %d\n", item1.num);
	putchar('\n');
	item2.num = 3;
	item2.price = 3.5;
	strcpy(item2.item, "Mango");
	puts("Union data");
	printf("Item: %s\n", item2.item);
	printf("Price: %f\n", item2.price);
	printf("Num: %d\n", item2.num);
}
