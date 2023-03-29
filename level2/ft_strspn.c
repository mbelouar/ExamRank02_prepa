#include <stdio.h>
#include <string.h>

size_t  ft_strspn(const char *s, const char *accept)
{
    int i;

    i = 0;
    while (s[i] && accept[i])
    {
        if (s[i] != accept[i])
            return (i);
        i++;
    }
    return (i);
}

int main(int ac, char **av)
{
    (void)ac;
    printf("my  : %lu\n", ft_strspn(av[1], av[2]));
    printf("man : %lu", strspn(av[1], av[2]));
}