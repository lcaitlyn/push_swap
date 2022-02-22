/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaitlyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 12:52:30 by lcaitlyn          #+#    #+#             */
/*   Updated: 2022/01/25 12:52:31 by lcaitlyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_all    *ft_init_t_all(int *arr, int nums)
{
    t_all    *all;

    all = (t_all *)malloc(sizeof(t_all));
    if (!all)
		ft_exit_error_arr(E_MALLOC, arr);
    all->a = NULL;
    all->b = NULL;
    all->next = 1;
    all->med = 0;
	all->flags = 0;
    all->len_a = nums;
    all->len_b = 0;
    return (all);
}

t_all	*ft_init(int *arr, int nums)
{
    int    i;
    int    j;
    int    index;
    t_all    *all;

    all = ft_init_t_all(arr, nums);
    i = -1;
    while (++i < nums)
    {
        index = 0;
        j = -1;
        while (++j < nums)
            if ((arr)[i] > (arr)[j])
                index++;
        if (!(ft_lstadd_front(&all->a, ft_lstnew(arr[i], index + 1))))
			ft_free_all(E_MALLOC, arr, all);
		
    }
	free(arr);
	return (all);
}
