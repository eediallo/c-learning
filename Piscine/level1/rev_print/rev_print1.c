#include <unistd.h>
#include <stdio.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	rev_print(char* str)
{
	int	end;
	int	len;

	len = str_len(str);
	end = len - 1;
	while (end >= 0)
	{
		write(1, &str[end], 1);
		end--;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	rev_print("abdoul is great man");	
	return (0);
}
