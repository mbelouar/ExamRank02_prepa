#include <unistd.h>
int main(int ac ,char **av)
{
  if (ac == 2)
  {
    int i = 0;
    int repeat;
    char *s = av[1];
    while (s[i])
    {
      if (s[i] >= 'a' && s[i]  <= 'z')
        repeat = s[i] - 'a' + 1;
      if (s[i] >= 'A' && s[i] <= 'Z')
        repeat = s[i] - 'A' + 1;
      if (repeat)
      {
        while (repeat--)
          write(1, &s[i],  1);
        repeat = 0;
      }
      else
        write (1, &s[i], 1);
      i++;
    }
  }
  write(1, "\n", 1);
}
