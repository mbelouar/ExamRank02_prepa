#include <unistd.h>

int ft_nbr_of_repeat(char c)
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

void  ft_repeat_alpha(char *str)
{
  int i = 0;
  int repeat;
  while (str[i])
  {
    repeat = ft_nbr_of_repeat(str[i]);
    while (repeat > 0)
    {
      write(1, &str[i], 1);
      repeat--;
    }
    i++;
  }
}

int main(int ac ,char **av)
{
  if (ac == 2)
    ft_repeat_alpha(av[1]);
  write(1, "\n", 1);
}
