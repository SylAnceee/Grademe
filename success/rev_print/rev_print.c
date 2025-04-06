#include <unistd.h>

int main (int ac, char **av)
{
	char *str = av[1];
	int len = 0;
	
	if (ac != 2)
	{
		write(1, "\n", 1);
		return 1;
	}
	while(str[len])
		len++;
	if (len > 0)
	{
		len--;
		while (len >= 0)
		{
			write(1, &str[len], 1);
			len--;
		}
	}
	write(1, "\n", 1);
	return (0);
}