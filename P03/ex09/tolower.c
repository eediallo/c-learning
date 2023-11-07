#include <stdio.h>
#include <ctype.h>
#include <string.h>

int	main(void)

{
	int	ch;
	int	i;
	char	str[15];

	i = 0;
	strcpy(str, "HELLO World!");
	while ((ch = str[i]) != '\0')
	{
		putchar(tolower(ch));
		i++;
	}
	putchar('\n');
	return (0);
}

