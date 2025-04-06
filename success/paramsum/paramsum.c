#include <unistd.h>
void ft_putnbr(int n)
{
	if (n > 9)
		ft_putnbr(n / 10);
	n = n % 10 + '0';
	write(1, &n, 1);
}

int main(int ac, char **av)
{
	while (*av)
		av++;
	ft_putnbr(ac - 1);
	write(1, "\n", 1);
	return (0);
}