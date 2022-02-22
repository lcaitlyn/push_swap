/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_prev.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaitlyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:27:36 by lcaitlyn          #+#    #+#             */
/*   Updated: 2022/02/02 16:27:54 by lcaitlyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*ft_find_prev(t_list *lst)
{
	t_list	*tmp_last;

	if (lst == NULL)
		return (NULL);
	tmp_last = ft_lstlast(lst);
	while (lst->next != tmp_last)
		lst = lst->next;
	return (lst);
}
