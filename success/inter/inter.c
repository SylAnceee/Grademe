#include <unistd.h>

int main (int ac, char **av)
{
	int i = 0, j;
	char *s1 = av[1];
	char *s2 = av[2];
	char tab[256] = {0};
	if (ac == 3)
	{
		while(s1[i])
		{
			j = 0;
			while(s2[j])
			{
				if (s1[i] == s2[j] && tab[(unsigned char)s1[i]] == 0)
				{
					write(1, &s1[i], 1);
					tab[(unsigned char)s1[i]] = 1;
					break;
				}
				j++;
			}
			i++;
		}

	}
	write(1, "\n", 1);
	return 0;
}