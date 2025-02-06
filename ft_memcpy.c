/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glorza-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 09:36:29 by glorza-p          #+#    #+#             */
/*   Updated: 2025/01/28 12:27:45 by glorza-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*c;

	if (dest == NULL && src == NULL)
		return (NULL);
	i = 0;
	c = (unsigned char *)src;
	p = (unsigned char *)dest;
	while (i < n)
	{
		p[i] = c[i];
		i++;
	}
	return (dest);
}
