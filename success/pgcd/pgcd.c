#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void pgcd(int a, int b)
{
	int d = a;

	while (d > 0)
	{
		if (a % d == 0 && b % d == 0)
		{
			printf("%d", d);
			printf("\n");
			return;
		}
		--d;
	}
}

int main (int ac, char **av)
{
	if (ac != 3)
	{
		write(1, "\n", 1);
		return(0);
	}
		pgcd(atoi(av[1]), atoi(av[2]));
	return 0;
}
