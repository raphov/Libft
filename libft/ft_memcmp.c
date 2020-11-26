/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagurney <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 14:10:45 by dagurney          #+#    #+#             */
/*   Updated: 2020/11/05 14:10:48 by dagurney         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	unsigned char *first;
	unsigned char *second;

	i = 0;
	first = (unsigned char *)s1;
	second = (unsigned char *)s2;
	while (i < n)
	{
		if (first[i] != second[i])
			return ((int)(first[i] - second[i]));
		i++;
	}
	return(0);
}
