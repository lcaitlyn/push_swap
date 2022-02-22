/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting_5.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaitlyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:35:26 by lcaitlyn          #+#    #+#             */
/*   Updated: 2022/02/02 16:35:27 by lcaitlyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_optimal_min(t_all *all)
{
	t_list	*tmp;
	int		i;

	i = 0;
	tmp = all->a;
	while (tmp->index != all->min)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}

void	ft_sorting_5(t_all *all)
{
	t_list	*tmp_last;

	while (all->len_a > 3)
	{
		tmp_last = ft_lstlast(all->a);
		ft_find_min(all, all->a, all->len_a);
		while (tmp_last->index != all->min)
		{
			if (ft_optimal_min(all) > 2)
				ra(all);
			else
				rra(all);
			tmp_last = ft_lstlast(all->a);
		}
		pb(all);
	}
	ft_sorting_3(all);
	while (all->len_b)
		pa(all);
	
	// УДАЛИТЬ
	print_lst(all->a);
	//
}
