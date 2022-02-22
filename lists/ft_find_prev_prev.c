/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_prev_prev.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaitlyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:31:25 by lcaitlyn          #+#    #+#             */
/*   Updated: 2022/02/02 16:31:38 by lcaitlyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*ft_find_prev_prev(t_list *lst)
{
	t_list	*tmp_prev;

	if (lst == NULL)
		return (NULL);
	tmp_prev = ft_find_prev(lst);
	while (lst->next != tmp_prev)
		lst = lst->next;
	return (lst);
}
