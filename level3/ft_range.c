#include <stdlib.h>
#include <stdio.h>

int     ft_abs(int n)
{
    if (n < 0)
        return (-n);
    return (n);
}

int     *ft_range(int start, int end)
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
            tab[i] = start;
            start++;
            i++;
        }
        else if (start > end)
        {
            tab[i] = start;
            start--;
            i++;
        }
    }
    return(tab);
}

int main()
{
    int i = 0;
    int *tab;

    tab =ft_range(0, -3);
    while (i < 4)
    {
        printf("%d ", tab[i]);
        i++;
    }
    return 0;
}