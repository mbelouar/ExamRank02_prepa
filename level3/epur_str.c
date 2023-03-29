#include <unistd.h>

int ft_iswhitespace(char c)
{
    if (c == ' ' || c == '\t')
        return (1);
    return(0);
}

int ft_isalpha(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return (1);
    return (0);
}

int main(int ac, char **av)
{
    int i;

    i = 0;
    if (ac == 2)
    {
        while (av[1][i] == ' ' || av[1][i] == '\t')  // skip all the whitespaces in the begining
            i++;
        while (av[1][i] != '\0')
        {
            if (ft_iswhitespace(av[1][i]) == 0)     // if the caractere isnt a whitespace 
                write(1, &av[1][i], 1);             // we print the caracter
            while (ft_iswhitespace(av[1][i]) == 1 && ft_iswhitespace(av[1][i + 1]) == 1)  // while the caracter is a whitespace and the next one also a whitespace
                i++;                                  // skip the whitespaces
            if (ft_iswhitespace(av[1][i]) == 1 && ft_isalpha(av[1][i + 1]) == 1)  // check if the caracter is a whitespace and the next one isnt a whitespace
                write(1, &av[1][i], 1);        // we print the caracter
            i++;              // increment the index i
        }
    }
    write (1, "\n", 1);
}