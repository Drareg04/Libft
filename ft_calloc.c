/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glorza-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 10:35:13 by glorza-p          #+#    #+#             */
/*   Updated: 2025/01/28 15:08:39 by glorza-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	char	*arr;

	arr = malloc(nmemb * size);
	i = 0;
	if (!arr)
		return (NULL);
	while (i < nmemb * size)
	{
		*(arr + i) = 0;
		i++;
	}
	return (arr);
}
