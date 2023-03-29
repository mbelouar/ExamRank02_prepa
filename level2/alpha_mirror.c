#include <unistd.h>

int nb_of_repeat(char c)
{
  int	repeat;

	if (c >= 'A' && c <= 'Z')
    repeat = c - 'A' + 1;
	else if (c >= 'a' && c <= 'z')
		repeat = c - 'a' + 1;
	else
		repeat = 1;
	return (repeat);
}

int main(int ac, char **av)
{
    int i;
    int repeat;

    i = 0;
    if (ac == 2)
    {
        while (av[1][i])
        {
            if ((av[1][i] >= 'a' && av[1][i] <= 'z') || (av[1][i] >= 'A' && av[1][i] <= 'Z'))
            {
                repeat = nb_of_repeat(av[1][i]);
                av[1][i] += 26 - (repeat * 2) + 1;
            }
            write(1, &av[1][i], 1);
            i++;
        } 
    }
    write(1, "\n", 1);
}