#include <stdio.h>
#include <string.h>

int main(int ac, char **av)
{
    int mod;
    int str1 = atoi(av[1]);
    int str2 = atoi(av[2]);

    if (ac != 3)
    {
        printf("\n");
        return (0);
    }
    if (str1 <= 0 || str2 <= 0)
    {
        printf("\n");
        return (0);
    }
    while (str2 != 0)
    {
        mod = str1 % str2;
        str1 = str2;
        str2 = mod;
    }
    printf("%d", str1);
    return (0);
}