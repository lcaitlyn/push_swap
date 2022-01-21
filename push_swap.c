#include "push_swap.h"


typedef struct s_list
{
    int				content;
    struct s_list	*next;
	struct s_list	*prev;
}    t_list;

int	lst_check(t_list *lst)
{
    if (!lst)
    {
        printf ("Стэк пуст");
        return (0);
    }
    else
        return (1);
}
t_list	*ft_lstnew(int content)
{
	t_list	*lstnew;

	lstnew = (t_list *)malloc(sizeof(t_list));
	if (!lstnew)
		return (NULL);
	lstnew->content = content;
	lstnew->next = NULL;
	return (lstnew);
}

t_list    *ft_lstadd(t_list *first, int content)
{
	t_list  *lst;

	if (first == NULL)
		return (ft_lstnew(content));
	lst = (t_list *)malloc(sizeof(t_list));
	if (!lst)
		return (NULL);
	lst->content = content;
	lst->next = NULL;
	first->next = lst;
	return (lst);
}

void	ft_lstprint(t_list *lst)
{
	if (!lst_check(lst))
		return;
	while (lst->next != NULL)
	{
		printf ("%d ", lst->content);
		lst = lst->next;
		
	}
	printf ("%d ", lst->content);
}

t_list    *ft_lstdelone(t_list *first, t_list *last)
{
    if (first->next == NULL)
    {
      free(first);
      first = NULL;
      return (NULL);
    }
    while (first->next != last)
        first = first->next;
    free(last);
    last = NULL;
    first->next = NULL;
    return (first);
}

int	main(int argc, char *argv[])
{
	int	*arr;
	int	num_of_nums;

	if (argc < 2)
		return (0);
	num_of_nums	= ft_num_of_nums(int argc, char **argv);
	ft_check_argv(argc, argv);
/*
//	ft_check_argv (;
	first = NULL;
    last = NULL;
	while (i < argc)
	{
		if (ft_atoi(argv[i]) != 0)
		{
			if (first == NULL)
			{
				first = ft_lstadd (first, ft_atoi(argv[i]));
				last = first;
			}
			else
			{
				last = ft_lstadd (last, ft_atoi(argv[i]));
			}
		}
		else
		{
			ft_exit_error("Error", 1);
		}
		i++;
	}
	ft_lstprint(first);*/
/*	if (first == last)
	{
		last = ft_lstdelone(first, last);
		first = last;
	}
	else
		last = ft_lstdelone(first, last);
	ft_lstprint(first);*/
	return (0);
}
/*
int	main()
{
    int *c;
    int *a;
    t_list  *first;
    t_list  *last;
    first = NULL;
    last = NULL;
    do
    {
        scanf("%d", c);
        switch (*c)
        {
            case 1:
                if (&lst_check)
                    printf("Стэк");
            case 2:
               printf ("Введите элемент, который хотите добавить (integer)");
               scanf("%d", a);
		if (first == NULL)
               		first = ft_lstnew(*a);
		else
			last = ft_lstadd(first, 234);
            case 3:
                if (first == last)
                {
                    free(first);
                    first = NULL;
                    last = NULL;
                }
                else
                    last = ft_lstdelone(first, last);
            case 4:
                ft_lstprint(first);
            case 5:
                printf ("Выход");
        }
    } while (*c != 5);
    first = ft_lstadd(first, 123);
    ft_lstprint(first);
    last = first;
    last = ft_lstadd(first, 234);
    ft_lstprint(first);
    if (first == last)
    {
      free(first);
      first = NULL;
      last = NULL;
    }
    else
      last = ft_lstdelone(first, last);
    ft_lstprint(first);
    if (first == last)
    {
      free(first);
      first = NULL;
      last = NULL;
    }
    else
      last = ft_lstdelone(first, last);
    ft_lstprint(first);
    return 0;
}*/
