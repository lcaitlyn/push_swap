#include "push_swap.h"

void    ft_free_sp(char **arr)
{
	char	**arr_p;

	arr_p = arr;
    while (*arr_p)
	{
		free(*arr_p);
		arr_p++;
	}
	free(arr);
}

int	ft_exit_error_arr(char *str, int *arr)
{
	free (arr);
	if (str)
		ft_putstr(str);
	exit(0);
}

int	ft_exit_error(char *str)
{
	ft_putstr(str);
	exit(0);
}

int	ft_exit_and_free(char *str, int *arr, char **arr_split)
{
	if (str)
		ft_putstr(str);
	ft_free_sp(arr_split);
	free (arr);
	exit(0);
}
