#include "push_swap.h"

void	ft_check_sort_arr(int *arr, int nums)
{
	int i;
	int j;

	i = 0;
	while (i < nums)
	{
		j = i + 1;
		while (j < nums)
		{
			if (arr[i] < arr[j])
				j++;
			else
				return ;
		}
		i++;
	}
	ft_exit_error_arr(NULL, arr);
}

void	ft_check_dup(int *arr, int nums)
{
	int	i;
	int	j;

	i = 0;
	while (i < nums)
	{
		j = i + 1;
		while (j < nums)
		{
			if (arr[i] == arr[j])
				ft_exit_error_arr(E_DOUBLE, arr);
			j++;
		}
		i++;
	}
}

void	ft_is_num(char *str)
{
	while (*str)
		if (!((*str <= '9' && *str >= '0') || *str == ' '
			  || *str == '\t' || *str == '-' || *str == '+'))
			ft_exit_error(E_INTEGER);
		else
			str++;
}

int	ft_count_nums(char *av[])
{
	int	i;
	int	nums;

	i = 0;
	nums = 0;
	while (av[++i])
	{
		ft_is_num(av[i]);
		nums += ft_wrdcnt(av[i], ' ');
	}
	if (nums < 2)
		exit (0);
	else
		return (nums);
}

int	*ft_check_argv(char *av[])
{
	char	**arr_split;
	int		i;
	int		j;
	int		k;
	int 	*arr;

	arr = (int *)ft_calloc(ft_count_nums(av), sizeof (int));
	if (!arr)
		ft_exit_error (E_MALLOC);
	i = 0;
	k = 0;
	while (av[++i])
	{
		arr_split = ft_split(av[i], ' ');			
		j = 0;
		while (arr_split[j])
			(arr)[k++] = ft_atoi(arr_split[j++], arr, arr_split);
		ft_free_split(arr_split, j);
	}
	ft_check_dup(arr, ft_count_nums(av));
	ft_check_sort_arr(arr, ft_count_nums(av));
	return (arr);
}
