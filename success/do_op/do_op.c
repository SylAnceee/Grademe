#include <unistd.h>
#include <math.h>

int ft_atoi(char *str)
{
	int result = 0;
	int sign = 1;
	int i = 0;
	while (str[i] == '-'|| str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
void ft_putchar (char c)
{
	write(1, &c, 1);
}
void ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb  >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
	else
		ft_putchar(nb + '0');
}

int main (int ac, char **av)
{
    int result;
    if (ac == 4)
    {
        int num1 = ft_atoi(av[1]);
        int num2 = ft_atoi(av[3]);
        if (av[2][0] == '+')
            result = num1 + num2;
        else if (av[2][0] == '-')
            result = num1 - num2;
        else if (av[2][0] == '*')
            result = num1 * num2;
        else if (av[2][0] == '/' && num2 != 0)
            result = num1 / num2;
        else if (av[2][0] == '%' && num2 != 0)
            result = num1 % num2;
        ft_putnbr(result);
    }
    write(1, "\n", 1);
    return (0);
}