/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glorza-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 13:22:00 by glorza-p          #+#    #+#             */
/*   Updated: 2025/01/28 15:08:17 by glorza-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	l;
	char	*arr;

	l = ft_strlen(s);
	arr = malloc(++l * sizeof(char));
	i = 0;
	if (!arr)
		return (NULL);
	while (s[i])
	{
		*(arr + i) = *(s + i);
		i++;
	}
	*(arr + i) = '\0';
	return (arr);
}
