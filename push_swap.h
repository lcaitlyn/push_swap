#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

char	**ft_split(char const *s, char c);
int		ft_exit_error (char *str);
void	ft_putstr(char *s);
void	ft_putchar(char c);
int		ft_atoi(const char *str);
int		ft_strcmp(char *s1, char *s2);
void	ft_check_double(int ac, char **av);
int		ft_strlen(const char *s);
char	*ft_substr(char const *s, unsigned int start, int len);
char	**ft_free_split(char **arr, int j);

#endif
