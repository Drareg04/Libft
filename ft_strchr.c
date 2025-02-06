/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glorza-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 12:24:16 by glorza-p          #+#    #+#             */
/*   Updated: 2025/01/27 14:55:46 by glorza-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

char	*ft_strchr(const char *s, int c)
{
	unsigned char	u;

	u = (unsigned char)c;
	if (u == 0)
		return ((char *)s + ft_strlen(s));
	while (*s)
	{
		if (*s == u)
			return ((char *)s);
		s++;
	}
	return (NULL);
}
