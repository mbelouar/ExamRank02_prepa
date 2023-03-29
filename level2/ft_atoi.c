#include <stdio.h>
#include <stdlib.h>

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
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
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

int main(int ac, char **av)
{
    (void)ac;
    printf("my atoi : %d\n", ft_atoi(av[1]));
    printf("man atoi : %d\n", atoi(av[1]));
}