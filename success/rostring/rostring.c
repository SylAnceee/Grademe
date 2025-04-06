#include <unistd.h>
#include <stdio.h>

int skipSpace(char *str, int i)
{
	while(str[i] && (str[i] == ' ' || str[i] == '\t'))
		i++;
	return i;
}
int find_end(char *str, int i)
{
	while(str[i] && str[i] != ' ' && str[i] != '\t')
		i++;
	return i;
}
void rostring(char *str)
{
	int i = 0;
	int start = 0;
	int end = 0;
	int space = 0;
	int printed = 0;



	i = skipSpace(str, i);
	start = i;
	i = find_end(str, i);
	end = i;
	i = skipSpace(str, i);
	while(str[i])
	{
		if (str[i] != ' ' && str[i] != '\t')
		{
			if (space == 1)
			{
				write(1, " ", 1);
				space = 0;
			}
			write(1, &str[i], 1);
			printed = 1;
			if (str[i + 1] == ' ' || str[i + 1] == '\t')
				space = 1;
		}
		i++;
	}
	if (start < end)
	{
		if (printed)
			write(1, " ", 1);
	}
	while (start < end)
		write(1, &str[start++], 1);
}
int main(int ac, char **av)
{
	if (ac > 1)
		rostring(av[1]);
	write(1, "\n", 1);
	return 0;
}