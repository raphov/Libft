/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagurney <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 14:14:40 by dagurney          #+#    #+#             */
/*   Updated: 2020/11/05 14:14:41 by dagurney         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t dstlen;
	size_t srclen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen((char *)src);
	i = 0;
	if (dstlen >= size)
		return (srclen + size);
	while (src[i] && (dstlen + i + 1 < size))
		{
			dst[dstlen + i] = src[i];
			i++;
		}
	dst[dstlen + i] = '\0';
	return (srclen + dstlen);
}
