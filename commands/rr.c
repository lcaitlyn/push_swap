/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaitlyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 12:15:51 by lcaitlyn          #+#    #+#             */
/*   Updated: 2022/02/26 12:15:52 by lcaitlyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rr_a(t_all *all)
{
	t_list	*tmp_last;
	t_list	*tmp;

	if (all->a == NULL)
		return ;
	tmp_last = ft_lstlast(all->a);
	tmp_last->next = all->a;
	tmp = all->a;
	while (tmp->next != tmp_last)
		tmp = tmp->next;
	tmp->next = NULL;
	ft_lstadd_front(&all->a, tmp_last);
}

void	rr_b(t_all *all)
{
	t_list	*tmp_last;
	t_list	*tmp;

	if (all->b == NULL)
		return ;
	tmp_last = ft_lstlast(all->b);
	tmp_last->next = all->b;
	tmp = all->b;
	while (tmp->next != tmp_last)
		tmp = tmp->next;
	tmp->next = NULL;
	ft_lstadd_front(&all->b, tmp_last);
}

void	rr(t_all *all)
{
	if (all->a == NULL)
		return ;
	if (all->b == NULL)
		return ;
	rr_a(all);
	rr_b(all);
	if (all->flags != -2)
		ft_putstr("rr");
}
