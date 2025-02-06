/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glorza-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 15:32:48 by glorza-p          #+#    #+#             */
/*   Updated: 2025/02/06 17:45:40 by glorza-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	length(int *p, int *sign)
{
	int	i;
	int	n;

	i = 0;
	if (*p < 0)
	{
		*sign = 1;
		*p = *p * -1;
	}
	n = *p;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int	i;
	char	*num;
	int	sign;

	sign = 0;
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = length(&n, &sign);
	num = malloc((i + sign + 1) * sizeof(char));
	if (!num)
		return (NULL);
	num[--i + sign] = '\0';
	while (n > 0)
	{
		num[--i + sign] = (n % 10) + '0';
		n /= 10;
	}
	if (sign == 1)
		num[i] = '-';
	return ((char *)num);
}
