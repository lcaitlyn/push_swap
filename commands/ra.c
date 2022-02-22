/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaitlyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 10:44:26 by lcaitlyn          #+#    #+#             */
/*   Updated: 2022/02/02 10:45:07 by lcaitlyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_all *all)
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
	ft_putstr("ra");
	printf ("%d", all->a->next->next->num);
	printf ("%d", all->a->next->num);
	printf ("%d\n", all->a->num);
}
