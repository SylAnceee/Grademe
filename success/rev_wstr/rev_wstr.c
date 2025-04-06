#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return i;
}

int is_ws(char c)
{
	return (c == ' ' || c == '\t');
}

void	ft_rev_wstr(char *str)
{
	int fast;
	int slow;
	int curr;

	fast = ft_strlen(str) - 1;
	slow = fast;
	curr = fast;

	while (fast >= 0)
	{
		slow = fast;
		curr = fast;
		while (fast >= 0 && !is_ws(str[fast]))
		{
			fast--;
		}
		fast++;
		curr = fast;
		while(curr <= slow)
		{
			write(1, &str[curr], 1);
			curr++;
		}
		if (fast > 0)
		{
			write(1, " ", 1);
		}
		fast--;
		fast--;
	}
	return;
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_rev_wstr(av[1]);
	}
	write(1, "\n", 1);
	return 0;
}