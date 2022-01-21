#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>


void	ft_putstr(char *s);
void	ft_putchar(char c);
int		ft_isdigit(int a);
int		ft_strlen(const char *s);
void	*ft_bzero(void *src, size_t b);
void	*ft_calloc(size_t count, size_t size);
int		ft_strcmp(char *s1, char *s2);

int		ft_atoi(const char *str, int *arr);

void	ft_check_argv(int ac, char **av);

char	*ft_substr(char const *s, unsigned int start, int len, int *arr);

int		ft_exit_and_free(char *str, int *arr);

int		*ft_split_and_do_int(char const *s, char c);

int		ft_exit_error (char *str);


#endif
