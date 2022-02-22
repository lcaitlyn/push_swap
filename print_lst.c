#include "push_swap.h"

void    print_lst(t_list *lst)
{
	if (!lst)
		return ;
    while (lst->next != NULL)
    {
        printf ("%d[%d] ", lst->num, lst->flag);
        lst = lst->next;
    }
    printf ("%d[%d]\n", lst->num, lst->flag);
}
