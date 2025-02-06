/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glorza-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 13:05:39 by glorza-p          #+#    #+#             */
/*   Updated: 2025/01/27 15:42:32 by glorza-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*c;

	i = 0;
	p = (unsigned char *)s1;
	c = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while ((*(p + i) || *(c + i)) && i < n)
	{
		if (*(p + i) != *(c + i))
			return ((*(p + i) - *(c + i)));
		i++;
	}
	return (0);
}
