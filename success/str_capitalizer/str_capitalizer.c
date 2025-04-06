#include <unistd.h>

void str_capitalizer(char *str)
{
	int i = 0;

	while(str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t'))
		{
			write(1, &str[i], 1);
			i++;
		}
		if (str[i])
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - ('a' - 'A');
			write(1, &str[i], 1);
			i++;
		}
		while (str[i] && str[i] != ' ' && str[i] != '\t')
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + ('a' - 'A');
			write(1, &str[i], 1);
			i++;
		}
	}
}

int main(int ac, char **av)
{
	int i = 1;
	if (ac >= 2)
	{
		while(i < ac)
		{
			str_capitalizer(av[i++]);
			write(1, "\n", 1);
		}
	}
	if (ac == 1)
		write(1, "\n", 1);
	return 0;
}