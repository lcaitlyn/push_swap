/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaitlyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 15:51:36 by lcaitlyn          #+#    #+#             */
/*   Updated: 2021/10/27 15:51:41 by lcaitlyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

int	ft_action(const char *str, int i, char sign, int *arr, char **a_s)
{
	long long int	x;

	x = 0;
	while ((str[i] >= '0' && str[i] <= '9') && str[i] != '\0')
	{
		x = x * 10 + (str[i] - '0');
		i++;
	}
	if (str[i] != '\0')
		return (ft_exit_and_free ("Wrong argument! (there is not only a number)", arr, a_s));
	if (sign == '+' && (x >= -2147483648 && x <= 2147483647))
		return (x);
	else if (sign == '-' && (-x >= -2147483648 && -x <= 2147483647))
		return (-x);
	else
		return (ft_exit_and_free ("Wrong argument! (doesn't in int range)", arr, a_s));
}

int	ft_atoi(const char *str, int *arr, char **a_s)
{	
	int	i;

	i = 0;
	if (str[i] == '\0')
		ft_exit_and_free("Wrong argument! Void arg \"\\0\"", arr, a_s);
	while (str[i] == '\n' || str[i] == '\f' || str[i] == '\v'
		|| str[i] == '\t' || str[i] == ' ' || str[i] == '\r')
		i++;
	if (str[i] >= '0' && str[i] <= '9')
		return (ft_action(str, i, '+', arr, a_s));
	else if (str[i + 1] >= '0' && str[i + 1] <= '9' && (str[i] == '+'
		|| str[i] == '-'))
		return (ft_action(str, i + 1, str[i], arr, a_s));
	else
		return (ft_exit_and_free ("Wrong argument! (doesn't integer)", arr, a_s));
}
