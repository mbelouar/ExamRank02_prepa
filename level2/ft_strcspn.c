// #include <stdio.h>
#include <string.h>

size_t  ft_strcspn(const char *s, const char *reject)
{
    int i;
    int j;

    i = 0;
    while (s[i])
    {
        j = 0;
        while (reject[j])
        {
            if (s[i] == reject[j])
                return (i);
            j++;
        }
        i++;
    }
    return(i);
}

// int main(int ac ,char **av)
// {
//     (void)ac;
//     printf("my  : %lu\n", ft_strcspn(av[1], av[2]));
//     printf("man : %lu", strcspn(av[1], av[2]));
// }
