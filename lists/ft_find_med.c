/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_med.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaitlyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 10:29:33 by lcaitlyn          #+#    #+#             */
/*   Updated: 2022/02/22 10:30:04 by lcaitlyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_find_med(t_all *all, t_list *lst, int len)
{
	ft_find_max(all, lst, len);
	ft_find_max(all, lst, len);
	
	all->med = (all->max - all->min) / 2 + all->min;
}
