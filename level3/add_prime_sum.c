#include <unistd.h>
#include <stdio.h>

int is_prime(unsigned int nb)
{
    unsigned int i;
    int count;

    i = 1;
    count = 0;
    while (i <= nb)
    {
        if (nb % i == 0)
            count++;
        i++;
    }
    if (count == 2)
        return (1);
    else
        return (0);
}

int ft_atoi(const char *str)
{
    int i;
    int sign;
    int result;

    i = 0;
    sign = 1;
    result = 0;
    while (str[i] && str[i] >= 9 && str[i] <= 13)
        i++;
    if (str[i] == '+')
        i++;
    else if (str[i] == '-')
    {
        sign *= -1;
        i++;
    }
    while (str[i] && (str[i] >= '0' && str[i] <= '9'))
    {
        result *= 10;
        result += str[i] - '0';
        i++;
    }
    return (sign * result);
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
    if (nb == -2147483648)
        write(1, "-2147483648", 11);
    if (nb < 0)
    {
        ft_putchar('-');
        nb *= -1;
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
    int sum;
    int i;
    int nb;

    i = 0;
    sum = 0;
    if (ac != 2)
        write(1, "0\n", 2);
    else if (ac == 2)
    {
        nb = ft_atoi(av[1]);
        if (nb <= 0)
            write(1, "0", 1);
        else if (nb > 0)
        {
            while (i <= nb)
            {
                if (is_prime(i) == 1)
                    sum += i;
                i++;
            }
            ft_putnbr(sum);
        }
        write(1, "\n", 1);
    }
}