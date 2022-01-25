#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

typedef struct s_list
{
	int				num;
	struct s_list	*next;
	struct s_list	*prev;
}	t_list;

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


#endif
