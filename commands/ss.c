/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaitlyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 12:18:50 by lcaitlyn          #+#    #+#             */
/*   Updated: 2022/02/26 12:18:50 by lcaitlyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ss_a(t_all *all)
{
	t_list	*tmp_last;
	t_list	*tmp_prev;
	t_list	*tmp_prev_prev;

	if (all->a == NULL || all->a->next == NULL)
		return ;
	tmp_last = ft_lstlast(all->a);
	if (all->len_a == 2)
	{
		all->a->next = NULL;
		tmp_last->next = all->a;
		ft_lstadd_front(&all->a, tmp_last);
	}
	else
	{
		tmp_prev = ft_find_prev(all->a);
		tmp_prev_prev = ft_find_prev_prev(all->a);
		tmp_last->next = tmp_prev;
		tmp_prev->next = NULL;
		tmp_prev_prev->next = tmp_last;
	}
}

void	ss_b(t_all *all)
{
	t_list	*tmp_last;
	t_list	*tmp_prev;
	t_list	*tmp_prev_prev;

	if (all->b == NULL || all->b->next == NULL)
		return ;
	tmp_last = ft_lstlast(all->b);
	if (all->len_b == 2)
	{
		all->b->next = NULL;
		tmp_last->next = all->b;
		ft_lstadd_front(&all->b, tmp_last);
	}
	else
	{
		tmp_prev = ft_find_prev(all->b);
		tmp_prev_prev = ft_find_prev_prev(all->b);
		tmp_last->next = tmp_prev;
		tmp_prev->next = NULL;
		tmp_prev_prev->next = tmp_last;
	}
}

void	ss(t_all *all)
{
	if (all->a == NULL || all->a->next == NULL)
		return ;
	if (all->b == NULL || all->b->next == NULL)
		return ;
	ss_a(all);
	ss_b(all);
	if (all->flags != -2)
		ft_putstr ("sb");
}
