#include "push_swap.h"

void	ft_free_av(char **av)
{
	char	**av_p;

	av_p = av;
	while (*av_p)
		free(*av_p++);
	free(av);
}

int	ft_exit_error(char *str)
{
	ft_putstr(str);
	exit(0);
}

void	*ft_exit_and_free(char *str, char **av)
{
	if (str)
		ft_putstr(str);
	ft_free_av(ac, av);
	exit(0);
}
