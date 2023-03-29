#include <unistd.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}

int main(int ac, char **av)
{
    int i;

    i = ft_strlen(av[1]) - 1;
    if (ac == 2)
    {
        while (av[1][i] == ' ' || av[1][i] == '\t')
            i--;
        while (i >= 0)
        {
            if (av[1][i] != ' ' && av[1][i] != '\t')
                --i;
            else
                break;
        }
        i++;
        while (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
        {
            write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}