#include <unistd.h>

int main (int ac, char **av)
{
	char ascii[255] = {0};

	int i = 1;
	int j;

	if (ac == 3)
	{
		while (i < 3)
		{
			j = 0;
			while (av[i][j])
			{
				if (ascii[(unsigned char) av[i][j]] == 0)
				{
					ascii[(unsigned char)av[i][j]] = 1;
					write(1, &av[i][j], 1);
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}