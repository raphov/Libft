/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagurney <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 14:13:29 by dagurney          #+#    #+#             */
/*   Updated: 2020/11/05 14:13:31 by dagurney         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int i;
	int len;
	char *cpy;

	i = 0;
	len = ft_strlen((char *)s);
	cpy = (char *)malloc((len + 1) * sizeof(char));
	if (!cpy)
		return (NULL);
	while (i< len)
	{
		cpy[i] = s[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
