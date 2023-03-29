#include <stdio.h>
#include <string.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}

char    *ft_strrev(char *str)
{
    int     i;
    int     j;
    char    tmp;

    i = 0;
    j = ft_strlen(str) - 1;
    while (i < (ft_strlen(str) / 2))
    {
        tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
        i++;
        j--;
    }
    return (str);
}

int main(int ac, char **av)
{
    (void)ac;
    printf("my  : %s\n", ft_strrev(av[1]));
}