#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    int j;
    int check = 0;

    i = 0;
    j = 0;
    if (ac == 3)
    {
        while(av[1][i])
			i++;
		while(av[2][j])
			av[1][i++] = av[2][j++];
        i = 1;
        write(1, &av[1][0], 1);
        while (av[1][i])
        {
            j = 0;
            check = 0;
            while (j < i)
            {
                if (av[1][j] == av[1][i])
                {
                    check = 1;
                    break;
                }
                j++;
            }
            if (check == 0)
                write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}