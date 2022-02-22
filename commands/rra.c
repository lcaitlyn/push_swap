/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaitlyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 10:44:39 by lcaitlyn          #+#    #+#             */
/*   Updated: 2022/02/02 10:45:00 by lcaitlyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_all *all)
{
	t_list	**begin;
	t_list	*tmp_last;
	t_list	*tmp;

	if (all->a == NULL || ft_lstlast(all->a) == NULL)
		return ;
	tmp = all->a;
	all->a = all->a->next;
	tmp_last = ft_lstlast(all->a);
	tmp_last->next = tmp;
	tmp_last->next->next = NULL;
	ft_putstr("rra");
}
