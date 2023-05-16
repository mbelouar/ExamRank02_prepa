#include <unistd.h>

int ft_iswhitespace(char c)
{
    if (c == ' ' || c == '\t')
        return (1);
    return(0);
}

int main(int argc, char const *argv[])
{
	int i;
	int flg;

	if (argc == 2)
	{
		i = 0;
		while (ft_iswhitespace(argv[1][i]) == 1)
			i++;
		while (argv[1][i])
		{
			if (ft_iswhitespace(argv[1][i]) == 1)
				flg = 1;
			if (ft_iswhitespace(argv[1][i]) == 0)
			{
				if (flg == 1)
					write(1, " ", 1);
				flg = 0;
				write(1, &argv[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
