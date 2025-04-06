#include <unistd.h>

int main(int ac, char **av) {
    char str[10000]; // Fixed: Declare `str` as a char array, not a pointer array
    int i = 0, j = 0;

    if (ac == 2) {
        while (av[1][i]) {
            if (av[1][i] == '_') {
                // Convert next character to uppercase
                if (av[1][i + 1]) {
                    str[j++] = av[1][i + 1] - 32;
                    i++; // Skip the next character
                }
            } else {
                // Copy the current character
                str[j++] = av[1][i];
            }
            i++;
        }
        str[j] = '\0'; // Null-terminate the string

        // Print the modified string
        i = 0; // Reset index for printing
        while (str[i]) {
            write(1, &str[i], 1);
            i++;
        }
    }
    write(1, "\n", 1); // Print a newline
    return (0);
}
