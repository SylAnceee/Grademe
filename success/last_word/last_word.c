#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    int len = 0;

    if (ac == 2)
    {
        // Find the length of the string
        while (av[1][len])
            len++;
        
        // Start from the last character (not the null terminator)
        i = len - 1;
        
        // Skip trailing spaces and tabs
        while (i >= 0 && (av[1][i] == ' ' || av[1][i] == '\t'))
            i--;
        
        // Find the beginning of the last word
        int end = i;
        while (i >= 0 && av[1][i] != ' ' && av[1][i] != '\t')
            i--;
        
        // Print the last word
        int j = i + 1;
        while (j <= end)
        {
            write(1, &av[1][j], 1);
            j++;
        }
    }
    write(1, "\n", 1);
    return 0;
}	