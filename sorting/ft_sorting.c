/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaitlyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 13:41:26 by lcaitlyn          #+#    #+#             */
/*   Updated: 2022/01/29 13:41:36 by lcaitlyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sorting(t_all *all)
{
	if (!all)
		return ;
	if (all->len_a == 2 && (all->a->num < all->a->next->num))
		sa(all);
	else if (all->len_a == 3)
		ft_sorting_3(all, all->a);
	else if (all->len_a <= 5)
		ft_sorting_5(all);
	else
		ft_sorting_main(all);
}
