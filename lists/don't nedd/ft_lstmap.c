/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaitlyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 11:45:13 by lcaitlyn          #+#    #+#             */
/*   Updated: 2021/10/28 11:45:14 by lcaitlyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*start;
	t_list	*action;

	if (!f)
		return (NULL);
	start = NULL;
	while (lst)
	{
		action = ft_lstnew((*f)(lst->content));
		if (!action)
		{
			while (start)
			{
				ft_lstclear(&start, del);
				return (NULL);
			}
		}
		ft_lstadd_back(&start, action);
		lst = lst->next;
	}
	return (start);
}
