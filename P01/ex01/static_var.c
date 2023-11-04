#include <stdio.h>

char	*my_name(void)
{
	static char	name[] = "Abdoul Diallo";

	return (name);
}

int	main(void)
{
	printf("my name is %s\n", my_name());
	return (0);
}
