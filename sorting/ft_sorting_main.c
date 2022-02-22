/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaitlyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 19:06:33 by lcaitlyn          #+#    #+#             */
/*   Updated: 2022/02/03 19:06:46 by lcaitlyn         ###   ########.fr       */
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

void	ft_add_flag(t_list **lst, int flags)
{
	t_list	*last;

	last = ft_lstlast(*lst);
	last->flag = flags + 1;
}

void	ft_last_b_sort(t_all *all)
{
	if (all->len_b == 1)
	{
		pa(all);
		ft_del_flag(all, &all->a);
		ra(all);
		return ;
	}
	if (all->len_b > 2)
	{
		ft_unsorting_3(all);
		pa(all);
		pa(all);
		pa(all);
		ft_del_flag(all, &all->a);
		ra(all);
		ft_del_flag(all, &all->a);
		ra(all);
		ft_del_flag(all, &all->a);
		ra(all);
		return ;
	}
	if (all->b->index > all->b->next->index)
		sb(all);
	pa(all);
	pa(all);
	ft_del_flag(all, &all->a);
	ra(all);
	ft_del_flag(all, &all->a);
	ra(all);
}

void	ft_sort_b(t_all *all, int len_b)
{
	t_list	*tmp_last;

	ft_find_med(all, all->b, all->len_b);
	while (len_b)
	{
		tmp_last = ft_lstlast(all->b);
		if (tmp_last->index >= all->med)
		{
			ft_add_flag(&all->b, all->flags);
			pa(all);
		}
		else if (all->len_b > 1)
			rb(all);
		len_b--;
	}
}

void	ft_start_sort(t_all *all, int len_a)
{
	t_list	*tmp_last;

	ft_find_med(all, all->a, all->len_a);
	tmp_last = ft_lstlast(all->a);
	while (len_a && tmp_last->flag == all->flags)
	{
		if (tmp_last->index <= all->med)
			pb(all);
		else
			ra(all);
		len_a--;
		tmp_last = ft_lstlast(all->a);
	}
}

void	ft_sorting_main(t_all *all)
{
	t_list	*tmp_last;

	ft_start_sort(all, all->len_a);
	while (all->len_b > 3)
	{
		ft_sort_b(all, all->len_b);
		all->flags++;
	}
	ft_last_b_sort(all);
	
	while (all->flags != -1)
	{
		// УДАЛИТЬ
		printf ("a = ");
		print_lst(all->a);
		printf ("b = ");
		print_lst(all->b);
		printf ("\n");
		//
		
		ft_start_sort(all, all->len_a);
		while (all->len_b > 3)
		{
			ft_sort_b(all, all->len_b);
			all->flags++;
		}
		ft_last_b_sort(all);
		tmp_last = ft_lstlast(all->a);
		all->flags = tmp_last->flag;
	}
	
	
	// УДАЛИТЬ
	printf ("a = ");
	print_lst(all->a);
	printf ("b = ");
	print_lst(all->b);
	printf ("\n");
	//
}
