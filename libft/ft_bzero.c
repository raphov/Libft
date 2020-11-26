/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagurney <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 14:12:29 by dagurney          #+#    #+#             */
/*   Updated: 2020/11/05 14:12:31 by dagurney         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*ch;

	i = 0;
	ch = (char *)s;
	while (i < n)
	{
		ch[i] = '\0';
		i++;
	}
}