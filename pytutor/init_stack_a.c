#include <stdlib.h>
#include <stdio.h>
typedef struct s_node
{
    int                num;
    int                flag;
    int                order;
    struct s_node    *next;
    struct s_node    *prev;
}   t_node;

typedef struct s_all
{
    t_node            *stack_a;
    t_node            *stack_b;

    int                min;
    int                max;
    int                mid;

    int                index;
    int                flag;

    int                size_a;
    int                size_b;
    int                check_size;
    char            *command;

    int                error;
    int                count;
}                    t_all;

static void    init_struct(t_all *all, int size_arr)
{
    all->size_a = size_arr;
    all->check_size = size_arr;
    all->size_b = 0;
    all->stack_a = NULL;
    all->stack_b = NULL;
    all->command = NULL;
    all->index = 1;
    all->flag = 0;
}

int    add_back(t_node **stack_a, t_node *list)
{
    t_node    *begin;

    if (list == NULL)
        return (1);
    begin = *stack_a;
    if (begin)
    {
        if (begin->prev)
        {
            begin->prev->next = list;
            list->prev = begin->prev;
            list->next = begin;
            begin->prev = list;
        }
        else
        {
            begin->prev = list;
            begin->next = list;
            list->prev = begin;
            list->next = begin;
        }
    }
    else
        *stack_a = list;
    return (0);
}

t_node    *lstnew(int num, int order)
{
    t_node    *lst;

    lst = malloc(sizeof(t_node));
    if (lst == NULL)
        return (NULL);
    lst->prev = NULL;
    lst->next = NULL;
    lst->num = num;
    lst->order = order;
    lst->flag = 0;
    return (lst);
}

t_all    *init(int **arr, int size_arr)
{
    t_all    *all;
    int        i;
    int        index_num;
    int        k;

    all = malloc(sizeof(t_all));
    if (!all)
    {
        free(arr);
        printf("memory init");
    }
    init_struct(all, size_arr);
    i = -1;
    while (++i < all->size_a)
    {
        k = -1;
        index_num = 0;
        while (++k < size_arr)
        {
            if ((*arr)[i] > (*arr)[k])
                ++index_num;
        }
        if (add_back(&all->stack_a, lstnew((*arr)[i], index_num + 1)))
            printf ("clear");
    }
    free(*arr);
    return (all);
}

int main()
{
  int *a;
  a = (int *)malloc(4 * sizeof(int));
  a[0] = 4;
  a[1] = 3;
  a[2] = 2;
  a[3] = 8;
  init (&a, 4);
  return 0;
}
