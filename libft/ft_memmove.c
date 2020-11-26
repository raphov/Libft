/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagurney <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 14:13:19 by dagurney          #+#    #+#             */
/*   Updated: 2020/11/05 14:13:21 by dagurney         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;
	char *tmps;
	char *tmpd;

	i = 0;
	tmps = (char *)src;
	tmpd = (char *)dest;
	if (!tmpd && !tmps)
		return (dest);
	if (tmps >= tmpd)
	{
		while (n--)
		{
			tmpd[i] = tmps[i];
			i++;
		}
	}
	else 
		while (n--)
			tmpd[n] = tmps[n];
	return(dest);
}
