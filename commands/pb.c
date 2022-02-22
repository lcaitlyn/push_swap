/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaitlyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:24:29 by lcaitlyn          #+#    #+#             */
/*   Updated: 2022/02/02 16:25:09 by lcaitlyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(t_all *all)
{
	t_list	*tmp_prev;

	if (all->a == NULL || ft_lstlast(all->a) == NULL)
		return ;
	if (all->len_a == 1)
	{
		ft_lstadd_back(&all->b, ft_lstlast(all->a));
		all->a = NULL;
	}
	else
	{
		tmp_prev = ft_find_prev(all->a);
		ft_lstadd_back(&all->b, ft_lstlast(all->a));
		tmp_prev->next = NULL;
	}
	all->len_a--;
	all->len_b++;
	ft_putstr("pb");
}
