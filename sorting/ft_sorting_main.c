/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaitlyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 19:06:33 by lcaitlyn          #+#    #+#             */
/*   Updated: 2022/02/03 19:06:46 by lcaitlyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_add_flag(t_all *all)
{
	
}

void	ft_sort_b(t_all *all, int len_b)
{
	t_list	*tmp_last;

	ft_find_med(all, all->b, all->len_b);
	while (len_b)
	{
		if (all->b
	}
}

void	ft_start_sort(t_all *all, int len_a)
{
	t_list	*tmp_last;

	ft_find_med(all, all->a, all->len_a);
	while (len_a)
	{
		tmp_last = ft_lstlast(all->a);
		if (tmp_last->index <= all->med)
			pb(all);
		else
			ra(all);
		len_a--;
	}
}

void	ft_sorting_main(t_all *all)
{
	ft_start_sort(all, all->len_a);
	
	printf ("%d", all->a->next->next->num);
	printf ("%d", all->a->next->num);
	printf ("%d\n", all->a->num);
	printf ("%d", all->b->next->next->num);
	printf ("%d", all->b->next->num);
	printf ("%d\n", all->b->num);
}
