/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_max.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaitlyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 10:18:26 by lcaitlyn          #+#    #+#             */
/*   Updated: 2022/02/22 10:21:13 by lcaitlyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_find_max(t_all *all, t_list *x, int len_size)
{
	t_list	*tmp;
	int		i;
	int		max;

	i = -1;
	tmp = x;
	max = tmp->index;
	while (++i != len_size)
	{
		if (tmp->index > max)
			max = tmp->index;
		tmp = tmp->next;
	}
	all->max = max;
}
