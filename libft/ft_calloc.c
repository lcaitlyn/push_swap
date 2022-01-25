/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaitlyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 17:53:36 by lcaitlyn          #+#    #+#             */
/*   Updated: 2022/01/20 17:53:52 by lcaitlyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*s;

	s = (void *)malloc((count) * size);
	if (!s)
		return (NULL);
	s[0] = '\0';
	ft_bzero (s, count * size);
	return (s);
}
