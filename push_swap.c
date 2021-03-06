/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaitlyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 14:07:32 by lcaitlyn          #+#    #+#             */
/*   Updated: 2022/01/25 14:07:33 by lcaitlyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_all	*all;

	if (argc < 2)
		return (0);
	all = ft_init(ft_check_argv(argv), ft_count_nums(argv));
	ft_sorting(all);
	ft_free_all(NULL, NULL, all);
	return (0);
}
