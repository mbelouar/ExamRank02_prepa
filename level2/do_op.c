#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}

int main(int ac, char **av)
{
    int     i;
    int     result;

    i = 0;
    result = 0;
    if (ac == 4)
    {
        if (ft_strlen(av[2]) == 1)
        {
            if (av[2][0] == '+')
                result += atoi(av[1]) + atoi(av[3]);
            else if (av[2][0] == '-')
                result += atoi(av[1]) - atoi(av[3]);
            else if (av[2][0] == '/')
                result += atoi(av[1]) / atoi(av[3]);
            else if (av[2][0] == '*')
                result += atoi(av[1]) * atoi(av[3]);
            else if (av[2][0] == '%')
			    result += atoi(av[1]) % atoi(av[3]);
            printf("%d", result);
        }
    }
    printf("\n");
}
