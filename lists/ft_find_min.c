/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_min.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaitlyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 18:22:46 by lcaitlyn          #+#    #+#             */
/*   Updated: 2022/02/03 18:23:05 by lcaitlyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_find_min(t_all *all, t_list *x, int len_size)
{
	t_list	*tmp;
	int		i;
	int		min;

	i = -1;
	tmp = x;
	min = tmp->index;
	while (++i != len_size)
	{
		if (tmp->index < min)
			min = tmp->index;
		tmp = tmp->next;
	}
	all->min = min;
}
