/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsorting_3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaitlyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:38:24 by lcaitlyn          #+#    #+#             */
/*   Updated: 2022/02/22 16:38:26 by lcaitlyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_unsorting_3(t_all *all)
{
	if (all->b->next->next->num > all->b->next->num
		&& all->b->num > all->b->next->next->num)
		rrb(all);
	else if (all->b->num > all->b->next->num
		&& all->b->next->num > all->b->next->next->num)
	{
		sb(all);
		rrb(all);
	}
	else if (all->b->next->num < all->b->num
		&& all->b->next->next->num > all->b->num)
	{
		sb(all);
		rb(all);
	}
	else if (all->b->next->next->num < all->b->num
		&& all->b->next->num > all->b->num)
		rb(all);
	else if (all->b->next->next->num < all->b->next->num
		&& all->b->num < all->b->next->next->num)
		sb(all);
}
