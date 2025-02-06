/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glorza-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 11:34:37 by glorza-p          #+#    #+#             */
/*   Updated: 2025/01/27 16:46:09 by glorza-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (*(big + i) && i + j < len && *(little + j))
	{
		if (*(big + i + j) == *(little + j))
			j++;
		else if (j > 0)
		{
			j = 0;
			i++;
		}
		else
			i++;
	}
	if ((size_t)j == ft_strlen(little))
		return ((char *)big + i);
	return (NULL);
}
