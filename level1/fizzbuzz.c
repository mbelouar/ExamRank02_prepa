#include <unistd.h>
#include <stdio.h>

void ft_print_nb(int nb)
{
  if (nb > 9)
    ft_print_nb(nb / 10);
  write(1, &"0123456789"[nb % 10], 1);
}

int main()
{
  int n;

  n = 1;
  while (n <= 100)
  {
    if (n % 5 == 0 && n % 3 == 0)
      write(1, "fizzbuzz", 8);
    else if (n % 5 == 0)
      write(1, "buzz", 4);
    else if (n % 3 == 0)
      write(1, "fizz", 4);
    else
      ft_print_nb(n);
    write(1, "\n", 1);
    n++;
  }
}
