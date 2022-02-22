/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaitlyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 16:31:31 by lcaitlyn          #+#    #+#             */
/*   Updated: 2022/02/03 16:31:43 by lcaitlyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_all *all)
{
	t_list	*tmp_prev;

	if (all->b == NULL || ft_lstlast(all->b) == NULL)
		return ;
	if (all->len_b == 1)
	{
		ft_lstadd_back(&all->a, ft_lstlast(all->b));
		all->b = NULL;
	}
	else
	{
		tmp_prev = ft_find_prev(all->b);
		ft_lstadd_back(&all->a, ft_lstlast(all->b));
		tmp_prev->next = NULL;
	}
	all->len_b--;
	all->len_a++;
	ft_putstr("pa");
}
