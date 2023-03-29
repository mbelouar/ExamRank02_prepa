#include <stdio.h>

void sort_int_tab(int *tab, unsigned int size)
{
    unsigned int i = 0;
    int          tmp;

    while (i < size - 1)
    {
        if (tab[i] > tab[i + 1])
        {
            tmp = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = tmp;
            i = -1;
        }
        i++;
    }
}

int main()
{
    int i = 0;
    int tab[7] = {4, 0, -1, 14, 2, 10, 3};
    sort_int_tab(tab, 7);
    while (i < 7){
        printf("%d ",tab[i]);
        i++;
    }
    return 0;
}