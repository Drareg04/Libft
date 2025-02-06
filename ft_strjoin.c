/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glorza-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 12:40:18 by glorza-p          #+#    #+#             */
/*   Updated: 2025/01/29 13:01:04 by glorza-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	char	*total;

	total = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!total)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		total[i] = s1[i];
		i++;
	}
	while (*s2)
	{
		total[i++] = *s2;
		s2++;
	}
	total[i] = '\0';
	return (total);
}
