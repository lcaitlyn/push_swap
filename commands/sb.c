/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaitlyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 09:34:15 by lcaitlyn          #+#    #+#             */
/*   Updated: 2022/02/22 09:34:17 by lcaitlyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sb(t_all *all)
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
		tmp_prev_prev->next	= tmp_last;
	}
	ft_putstr ("sb");
	if (all->len_b > 2)
		printf ("%d", all->b->next->next->num);
	printf ("%d", all->b->next->num);
	printf ("%d\n", all->b->num);
}
