#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
    int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}

size_t  ft_strspn(const char *s, const char *accept)
{
    size_t  i;

    i = 0;
    while (s[i])
    {
        if (ft_strchr(accept, s[i]) == 0)
            break;
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