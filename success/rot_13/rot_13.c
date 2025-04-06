#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}

char rot_13(char c)
{
	if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
		return (c + 13);
	if ((c >= 'n' && c <= 'z') || (c >= 'N' && c <= 'Z'))
		return (c - 13);
	return (c);
}

int main(int ac, char **av)
{
	int i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			ft_putchar(rot_13(av[1][i]));
			i++;
		}
	}
	write (1, "\n", 1);
	return 0;
}