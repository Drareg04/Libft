/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glorza-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 12:54:19 by glorza-p          #+#    #+#             */
/*   Updated: 2025/01/27 17:16:47 by glorza-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_memcmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*c;

	i = 0;
	p = (unsigned char *)s1;
	c = (unsigned char *)s2;
	while (i < n)
	{
		if (*(p + i) != *(c + i))
			return ((*(p + i) - *(c + i)));
		i++;
	}
	return (0);
}
