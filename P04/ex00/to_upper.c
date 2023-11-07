#include <ctype.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

void	to_upper(char *str)
{
	int	i;
	char	ch;

	i = 0;	
	while(str[i])
	{
		ch = str[i];
		putchar(toupper(ch));
		i++;
	}
	putchar('\n');
}

int	main(void)
{ 
	char	str[] = "hello world";
	to_upper(str);
	return (0);
}
