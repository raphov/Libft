/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagurney <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 14:14:17 by dagurney          #+#    #+#             */
/*   Updated: 2020/11/05 14:14:19 by dagurney         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*tmps;

	i = 0;
	tmps = (char *)s;
	while (i < n)
	{
		if (tmps[i] == (char)c)
			return ((void *)tmps + i);
		i++;
	}
	if ((char)c == '\0')
		return ((void *)tmps);
	return (NULL);
}
