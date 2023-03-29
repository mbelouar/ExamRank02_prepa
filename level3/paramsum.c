#include <unistd.h>

int ft_len(char **str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

int main(int ac, char **av)
{
    (void)ac;
    char c = (ft_len(av) - 1) + 48;
    write(1, &c, 1);
    write(1, "\n", 1);
    return 0;
}