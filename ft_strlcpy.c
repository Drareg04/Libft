/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glorza-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 13:34:04 by glorza-p          #+#    #+#             */
/*   Updated: 2025/01/28 16:58:13 by glorza-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	n;

	i = -1;
	n = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (*(src + ++i))
	{
		if (i < (size -1))
		{
			*(dst + i) = *(src + i);
			n++;
		}
	}
	*(dst + n) = '\0';
	return (i);
}
