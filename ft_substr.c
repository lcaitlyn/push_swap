/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaitlyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 15:57:06 by lcaitlyn          #+#    #+#             */
/*   Updated: 2021/10/27 15:57:07 by lcaitlyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_substr(char const *s, unsigned int start, int len)
{
	char	*str;
	char	*p;
	int		lensub;

	if (!s)
		return (NULL);
	lensub = ft_strlen((char *)s) - start;
	if (lensub > len)
		lensub = len;
	if (start >= ft_strlen((char *)s) || len < 1)
	{
		str = malloc(sizeof(char));
		return (str);
	}
	str = malloc((lensub + 1) * sizeof(char));
	if (!str)
		ft_exit_error("Didn't allocate memory! (ft_substr)");
	p = str;
	while (lensub > 0)
	{
		lensub--;
		str[lensub] = (char)s[start + lensub];
	}
	return (p);
}
