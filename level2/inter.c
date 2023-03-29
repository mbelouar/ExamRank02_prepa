#include <unistd.h>

int main(int ac, char **av)
{
    int i, j, k, check;

    i = 0;
    check = 1;
    if (ac == 3)
    {
        while (av[1][i])
        {
            j = 0;
            check = 1;
            while (av[2][j])
            {
                if (av[1][i] == av[2][j])
                {
                    // must check if the caractere was already printed
                    k = 0;
                    while (k < i)
                    {
                        if (av[1][k] == av[1][i])
                        {
                            check = 0;
                            break;
                        }
                        k++;
                    }
                    if (check == 1)
                    {
                        write(1, &av[1][i], 1);
                        break ;
                    }
                }
                j++;
            }
            i++;
        }
    }
    write(1, "\n", 1);
}