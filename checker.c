/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaitlyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 18:48:17 by lcaitlyn          #+#    #+#             */
/*   Updated: 2022/02/24 18:48:39 by lcaitlyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sort_true(t_all *all, int len_a)
{
	t_list	*tmp;

	tmp = all->a;
	while (len_a && tmp->next != NULL)
	{
		if (tmp->index < tmp->next->index)
			return (0);
		tmp = tmp->next;
		len_a--;
	}
	return (1);
}

void	get_cmd(t_all *all, char *line)
{
	if (!ft_strncmp(line, "pa\n", 3))
		pa(all);
	else if (!ft_strncmp(line, "pb\n", 3))
		pb(all);
	else if (!ft_strncmp(line, "sa\n", 3))
		sa(all);
	else if (!ft_strncmp(line, "sb\n", 3))
		sb(all);
	else if (!ft_strncmp(line, "ss\n", 3))
		ss(all);
	else if (!ft_strncmp(line, "ra\n", 3))
		ra(all);
	else if (!ft_strncmp(line, "rb\n", 3))
		rb(all);
	else if (!ft_strncmp(line, "rr\n", 3))
		rr(all);
	else if (!ft_strncmp(line, "rra\n", 4))
		rra(all);
	else if (!ft_strncmp(line, "rrb\n", 4))
		rrb(all);
	else if (!ft_strncmp(line, "rrr\n", 4))
		rrr(all);
	else
		ft_free_all(E_VOID, NULL, all);
}

void	checker(t_all *all)
{
	char	*line;

	all->flags = -2;
	while (1)
	{
		line = get_next_line(0);
		if (!line)
			break ;
		get_cmd(all, line);
	}
	if (sort_true(all, all->len_a) && !all->len_b)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}

int	main(int argc, char *argv[])
{
	t_all	*all;

	if (argc < 2)
		return (0);
	all = ft_init(ft_check_argv(argv), ft_count_nums(argv));
	checker(all);
	ft_free_all(NULL, NULL, all);
	return (0);
}
