#include <stdlib.h>
#include <stdio.h>

int     ft_abs(int n)
{
    if (n < 0)
        return (-n);
    return (n);
}

int     *ft_rrange(int start, int end)
{
    int *tab;
    int i = 0;
    int len = ft_abs(end - start) + 1;

    tab = malloc(sizeof(int) * len);
    if (!tab)
        return (0);
    while (i < len)
    {
        if (start <= end)
        {
            tab[i] = end;
            end--;
            i++;
        }
        else if (start > end)
        {
            tab[i] = end;
            end++;
            i++;
        }
    }
    return(tab);
}

int main()
{
    int i = 0;
    int *tab;

    tab =ft_rrange(-3, -1);
    while (i < 6)
    {
        printf("%d ", tab[i]);
        i++;
    }
    return 0;
}