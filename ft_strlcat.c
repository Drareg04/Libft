/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glorza-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 12:56:40 by glorza-p          #+#    #+#             */
/*   Updated: 2025/01/28 16:06:28 by glorza-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	ld;

	ld = ft_strlen(dst);
	if (ld >= size)
		return (size + ft_strlen(src));
	return (ld + ft_strlcpy(dst + ld, src, size - ld));
}
