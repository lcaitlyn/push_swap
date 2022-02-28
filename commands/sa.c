/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaitlyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 14:07:42 by lcaitlyn          #+#    #+#             */
/*   Updated: 2022/01/29 14:07:56 by lcaitlyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_all *all)
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
	if (all->flags != -2)
		ft_putstr ("sa");
}
