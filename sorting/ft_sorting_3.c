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

/*void	ft_sorting_3(t_all *all)
{
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
		ra(all);
	else if (all->a->next->next->num < all->a->num
		&& all->a->next->num > all->a->num)
	{
		sa(all);
		ra(all);
	}
	else if (all->a->next->next->num < all->a->next->num
		&& all->a->num < all->a->next->next->num)
		rra(all);
}*/

void	ft_sorting_3(t_all *all, t_list *lst)
{
	if (lst->next->next->num > lst->next->num
		&& lst->num > lst->next->next->num)
		sa(all);
	else if (lst->num < lst->next->num
		&& lst->next->num < lst->next->next->num)
	{
		sa(all);
		rra(all);
	}
	else if (lst->next->num < lst->num
		&& lst->next->next->num > lst->num)
		ra(all);
	else if (lst->next->next->num < lst->num
		&& lst->next->num > lst->num)
	{
		sa(all);
		ra(all);
	}
	else if (lst->next->next->num < lst->next->num
		&& lst->num < lst->next->next->num)
		rra(all);
}
