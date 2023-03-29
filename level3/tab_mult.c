#include <unistd.h>

int ft_atoi(char *str)
{
    int res;
    int i;

    res = 0;
    i = 0;
    while (str[i])
    {
        res = res * 10;
        res = res + str[i] - '0';
        i++;
    }
    return (res);
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    if (nb == -2147483648)
        write(1, "-2147483648", 11);
    if (nb < 0)
    {
        nb *= -1;
        write(1, "-", 1);
        ft_putnbr(nb);
    }
    else if (nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else
        ft_putchar(nb + '0');
}

int main(int ac, char **av)
{
    if (ac != 2)
        write(1, "\n", 1);
    else
    {
        int i = 1;
        while (i <= 9)
        {
            ft_putnbr(i);
            write(1, " x ", 3);
            ft_putnbr(ft_atoi(av[1]));
            write(1, " = ", 3);
            ft_putnbr(i * ft_atoi(av[1]));
            write(1, "\n", 1);
            i++;
        }
    }
}