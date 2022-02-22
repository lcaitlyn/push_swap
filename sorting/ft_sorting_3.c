/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting_3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaitlyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 10:27:28 by lcaitlyn          #+#    #+#             */
/*   Updated: 2022/02/02 10:27:39 by lcaitlyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_sorting_3(t_all *all)
{
	int	i;

	i = 1;
	if (all->a->next->next->num > all->a->next->num
			&& all->a->num > all->a->next->next->num)
		sa(all);
	else if (all->a->num < all->a->next->num
				&& all->a->next->num < all->a->next->next->num)
	{
		sa(all);
		rra(all);
	}
	else if (all->a->next->num < all->a->num
				&& all->a->next->next->num > all->a->num)
	{
		ra(all);
		i = 0;
	}
		
	else if (all->a->next->next->num < all->a->num
				&& all->a->next->num > all->a->num)
	{
		sa(all);
		ra(all);
	}
	else if (all->a->next->next->num < all->a->next->num
				&& all->a->num < all->a->next->next->num)
	{
		rra(all);
		i = 0;
	}
	return (i);
}
