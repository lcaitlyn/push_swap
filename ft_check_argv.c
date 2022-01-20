#include "push_swap.h"

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
}
