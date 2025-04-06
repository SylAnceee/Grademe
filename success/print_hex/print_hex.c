#include <unistd.h>

void ft_putnbr_base(unsigned int nbr, char *base)
{
	if (nbr >= 16)
		ft_putnbr_base(nbr / 16, base);
	write(1, &base[nbr % 16], 1);
}
int	ft_atoi(char *str)
{
	int result = 0;
	int i = 0;
	while(str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return result;
}
int main (int ac, char **av)
{

	if (ac == 2)
	{
		unsigned int num = (unsigned int)ft_atoi(av[1]);
		ft_putnbr_base(num, "0123456789abcdef");
	}
		write (1, "\n", 1);
	return 0;
}