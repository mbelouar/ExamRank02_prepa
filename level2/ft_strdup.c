#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char    *ft_strdup(char *src)
{
    char    *new;
    int     i;

    i = 1;
    while (src[i])
        i++;
    new = (char *)malloc(i + 1);
    if (!new)
        return(NULL);
    i = 0;
    while (src[i])
    {
        new[i] = src[i];
        i++;
    }
    new[i] = '\0';
    return(new);
}

int main(int ac ,char **av)
{
    (void)ac;
    printf("my  : %s\n", ft_strdup(av[1]));
    printf("man : %s", strdup(av[1]));
}