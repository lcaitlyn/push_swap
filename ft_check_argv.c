#include "push_swap.h"

void	ft_is_num(char *str)
{
	while (*str++)
		if (!((*str <= '9' && *str >= '0') || *str == ' '
			  || *str == '\t' || *str == '-' || *str == '+'))
			ft_exit_error("Wrong argument! Doesn't integer (ft_is_num)");
		else
			str++;
}

int	ft_num_of_nums(int ac, char *av[])
{
	int	i;

	i = 0;
	while (av[++i])
	{
		ft_is_num(av[i]);
		
	}
}
/*
void    ft_check_double(int ac, char **av)
{
    char    **av_p;
    int    i;

    i = 0;
    while (i < ac)
    {
        av_p = av + 1;
        while (*av_p)
        {
            if (!(ft_strcmp(*av, *av_p)))
                ft_exit_error ("Wrong argument! Double argument");
            av_p++;
        }
        i++;
        av++;
    }
}

void	ft_init_arr(int ac, char **av)
{
	int		*arr;

	arr = (int)malloc((ac + 1) * sizeof (int));
	if (!arr)
		ft_exit_error ("Didn't allocate memory! (ft_init_arr)");
	
}
*/
/*
void	ft_check_argv(int ac, char **av)
{
	int	*arr;

	av++;
	arr = ft_split_and_do_int (*av, ' ');
	printf ("%d\n", arr[0]);
	printf ("%d\n", arr[1]);
	printf ("%d\n", arr[2]);
	printf ("%d\n", arr[3]);
	printf ("%d\n", arr[4]);
	printf ("%d\n", arr[5]);
}
*/
/* старое
void	ft_check_argv(int ac, char **av)
{
	char	**av_p;

	if (ac == 2)
	{
		av = ft_split(av[1], ' ');
		av_p = av;
		ac = 0;
		while (*av_p++)
			ac++;
	}
	else
	{
		av++;
		ac--;
	}
	if (ac < 2 && (ft_atoi(*av, ac, av) || (**av == '0' && **av + 1 == '\0')))
		ft_exit_and_free (NULL, av);
	ft_init_arr(ac, av);
}*/
