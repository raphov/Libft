/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagurney <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 14:13:07 by dagurney          #+#    #+#             */
/*   Updated: 2020/11/05 14:13:08 by dagurney         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t i;
	unsigned char *tmps;
	unsigned char *tmpd;

	i = 0;
	tmps = (unsigned char *)src;
	tmpd = (unsigned char *)dest;
	while (i < n)
	{
		tmpd[i] = tmps[i];
		if (tmps[i] == (unsigned char)c)
			return (dest + i + 1);
		i++;
	}
	return(0);
}
