/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glorza-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 12:23:20 by glorza-p          #+#    #+#             */
/*   Updated: 2025/01/27 17:15:27 by glorza-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	v;

	i = 0;
	p = (unsigned char *)s;
	v = (unsigned char)c;
	while (i != n)
	{
		if (*(p + i) == v)
			return (p + i);
		i++;
	}
	return (NULL);
}
