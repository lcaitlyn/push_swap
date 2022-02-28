/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaitlyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 09:34:28 by lcaitlyn          #+#    #+#             */
/*   Updated: 2022/02/22 09:34:29 by lcaitlyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rb(t_all *all)
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
	if (all->flags != -2)
		ft_putstr("rb");
}
