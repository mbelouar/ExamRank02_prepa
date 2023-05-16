#include <stdlib.h>

int ft_size(int n)
{
    int i = 0;

    if (n <= 0)
        i++;
    while (n != 0)
    {
        n /= 10;
        i++;
    }
    return (i);
}

void    ft_fill_str(int nbr, char *str, int size, int stock_n)
{
    while (size > stock_n)
    {
        str[size - 1] = nbr % 10 + '0';
        nbr /= 10;
        size--;
    }
}

char    *ft_itoa(int nbr)
{
    char    *str;
    int     size;
    int     stock_n;

    size = ft_size(nbr);
    str = malloc(sizeof(int) * size + 1);
    if (!str)
        return (0);
    if (nbr == 0)
    {
       str[0] = '0';
       return(str);
    }
    if (nbr == -2147483648)
    {
        str[0] = '-';
        str[1] = '2';
        nbr = 147483648;
        stock_n = 2;
    }
    if (nbr < 0)
    {
        str[0] = '-';
        stock_n = 1;
        nbr *= -1;
    }
    ft_fill_str(nbr, str, size, stock_n);
    str[size] = '\0';
    return (str);
}
