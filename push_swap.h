#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

# define E_DOUBLE "Error! Double arguments."
# define E_MALLOC "Error! Couldn't allocate memory for arr."
# define E_INTEGER "Error! Argument isn't integer."
# define E_NUMBER "Error! Argument insn't a number)."
# define E_RANGE "Error! Argument doesn't in int range."
# define E_VOID "Error! Void arg \"\\0\"."

typedef struct s_list
{
	int		num;
	int		index;
	int		flag;
	struct s_list	*next;
	struct s_list	*prev;
}	t_list;

typedef struct s_all
{
	t_list	*a;
	t_list	*b;
	
	int		flags;
	int		next;
	int		min;
	int		max;
	int		med;
	
	int		len_a;
	int		len_b;
}	t_all;

void	ft_putstr(char *s);
void	ft_putchar(char c);
int		ft_isdigit(int a);
int		ft_strlen(const char *s);
void	*ft_bzero(void *src, size_t b);
void	*ft_calloc(size_t count, size_t size);
int		ft_strcmp(char *s1, char *s2);
char	*ft_substr(char const *s, unsigned int start, int len);

int		ft_atoi(const char *str, int *arr, char **a_s);

int		ft_count_nums(char *av[]);
int		*ft_check_argv(char *av[]);

char	**ft_free_split(char **arr, int j);
int		ft_wrdcnt(char const *s, char c);
char	**ft_split(char const *s, char c);


int		ft_exit_error_arr(char *str, int *arr);
int		ft_exit_error (char *str);
int		ft_exit_and_free(char *str, int *arr, char **arr_split);
int		ft_free_all(char *str, int *arr, t_all *all);

t_all	*ft_init(int *arr, int nums);

void    ft_lstclear(t_all *all);
int		ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_lstnew(int num, int index);
t_list	*ft_lstlast(t_list *lst);

t_list	*ft_find_prev(t_list *lst);
t_list	*ft_find_prev_prev(t_list *lst);
void	ft_find_min(t_all *all, t_list *x, int len_size);
void	ft_find_max(t_all *all, t_list *x, int len_size);
void	ft_find_med(t_all *all, t_list *lst, int len);

// УДАЛИТЬ (ПОТОМ :D)
void    print_lst(t_list *lst);


void	ft_sorting(t_all *all);
int		ft_sorting_3(t_all *all);
int		ft_unsorting_3(t_all *all);
void	ft_sorting_5(t_all *all);
void	ft_sorting_main(t_all *all);

void	sa(t_all *all);
void	sb(t_all *all);
void	ra(t_all *all);
void	rb(t_all *all);
void	rra(t_all *all);
void	rrb(t_all *all);
void	pb(t_all *all);
void	pa(t_all *all);


#endif
