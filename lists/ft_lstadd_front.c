/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaitlyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 09:50:48 by lcaitlyn          #+#    #+#             */
/*   Updated: 2021/10/28 09:50:49 by lcaitlyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return (0);
	if (*lst)
	{
		new->next = *lst;
		*lst = new;
	}
	else
		*lst = new;
	return (1);
}
