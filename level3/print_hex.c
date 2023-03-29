#include <unistd.h>

int ft_atoi(char *str)
{
    int res;
    int i;

    i = 0;
    res = 0;
    while (str[i])
    {
        res = res * 10;
        res = res + str[i] - '0';
        i++;
    }
    return (res);
}

void    print_hex(int n)
{
    char    hex_digits[] = "0123456789abcdef";

    if (n >= 16)
        print_hex(n / 16);
    write(1, &hex_digits[n % 16], 1);
}

int main(int ac, char **av)
{
    if (ac == 2)
        print_hex(ft_atoi(av[1]));
    write(1, "\n", 1);
}