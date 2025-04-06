#include <stdlib.h>
#include <limits.h>

char *ft_itoa(int nbr)
{
    long n = nbr;
    int len = (nbr <= 0) ? 1 : 0; 
    long temp = n;
    char *str;

    while (temp)
    {
        temp /= 10;
        len++;
    }
    if (!(str = malloc(sizeof(char) * (len + 1))))
        return (NULL);
    str[len] = '\0';
    if (n < 0)
        n = -n;
    if (nbr == 0)
        str[0] = '0';
    while (n)
    {
        str[--len] = (n % 10) + '0';
        n /= 10;
    }
    if (nbr < 0)
        str[0] = '-';
    return (str);
}

int main(void)
{

    return (0);
}