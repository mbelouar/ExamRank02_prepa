//#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

int	ft_list_size(t_list *begin_list)
{
    int i = 0;
    while (begin_list != NULL)
    {
        i++;
        begin_list = begin_list->next;
    }
    return (i);
}

int main() {
    // create a linked list
    t_list *node1 = malloc(sizeof(t_list));
    t_list *node2 = malloc(sizeof(t_list));
    t_list *node3 = malloc(sizeof(t_list));

    node1->next = node2;
    node1->data = (void *) 1;

    node2->next = node3;
    node2->data = (void *) 2;

    node3->next = NULL;
    node3->data = (void *) 3;

    // calculate the size of the linked list
    int size = ft_list_size(node1);

    // print the result
    printf("The linked list has %d nodes\n", size);

    // free memory
    free(node1);
    free(node2);
    free(node3);

    return 0;
}