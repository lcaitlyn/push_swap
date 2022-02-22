/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaitlyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 11:44:31 by lcaitlyn          #+#    #+#             */
/*   Updated: 2021/10/28 11:44:33 by lcaitlyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    ft_lstclear(t_all *all)
{
    t_list	*temp;
	int		i;

    if (!all->a)
        return ;
	i = 0;
    while (++i < all->len_a)
    {
        temp = all->a->next;
        free(all->a);
        all->a = NULL;
        all->a = temp;
    }
	while (all->b)
    {
        temp = all->b->next;
        free(all->b);
        all->b = NULL;
        all->b = temp;
    }
    free(all);
}
