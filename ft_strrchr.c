/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glorza-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 12:24:16 by glorza-p          #+#    #+#             */
/*   Updated: 2025/01/27 15:02:42 by glorza-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	u;
	int				i;

	i = ft_strlen(s);
	u = (unsigned char)c;
	while (i + 1 >= 0)
	{
		if (*(s + i) == u)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
