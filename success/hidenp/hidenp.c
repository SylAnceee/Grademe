#include <unistd.h>

int hidenp(char *s1, char *s2)
{
    int i = 0;
    int j = 0;

    while (s1[i]) // Iterate through s1
    {
        while (s2[j] && s2[j] != s1[i]) // Look for s1[i] in s2
            j++;

        if (!s2[j]) // If end of s2 is reached without finding s1[i]
            return write(1, "0\n", 2);

        j++; // Move to the next character in s2
        i++; // Move to the next character in s1
    }
    return write(1, "1\n", 2); // All characters in s1 were found in order
}
int	main(int ac, char **av)
{
	if (ac != 3)
	{
		write (1, "\n", 1);
		return 0;
	}
	hidenp(av[1], av[2]);
	return 0;
	
}
