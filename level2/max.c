#include <stdio.h>

int     max(int *tab, unsigned int len)
{
    if (!tab)
        return (0);
    unsigned int i;
    int max = tab[0];

    i = 1;
    while (i < len)
    {
        if (max < tab[i])
            max = tab[i];
        i++;
    }
    return (max);
}

int main()
{
    int tab[] = {45, 7, 12, 0, 78, 1, 46};
    printf("%d", max(tab, 7));
}