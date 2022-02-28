/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting_main_utils.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaitlyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 16:39:22 by lcaitlyn          #+#    #+#             */
/*   Updated: 2022/02/24 16:39:34 by lcaitlyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_del_flag(t_all *all, t_list **lst)
{
	t_list	*last;

	last = ft_lstlast(*lst);
	last->flag = -1;
	all->next++;
}

void	pa_del_ra(t_all *all)
{
	pa(all);
	ft_del_flag(all, &all->a);
	ra(all);
}

void	del_ra(t_all *all)
{
	ft_del_flag(all, &all->a);
	ra(all);
}

void	pa_pa_del_ra_del_ra(t_all *all)
{
	pa(all);
	pa(all);
	ft_del_flag(all, &all->a);
	ra(all);
	ft_del_flag(all, &all->a);
	ra(all);
}

void	pa_pa_pa_del_ra_del_ra_del_ra(t_all *all)
{
	pa(all);
	pa(all);
	pa(all);
	ft_del_flag(all, &all->a);
	ra(all);
	ft_del_flag(all, &all->a);
	ra(all);
	ft_del_flag(all, &all->a);
	ra(all);
}
