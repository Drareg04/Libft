/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glorza-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 13:02:46 by glorza-p          #+#    #+#             */
/*   Updated: 2025/01/15 13:34:40 by glorza-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

int		ft_islower(unsigned int c);
int		ft_isupper(unsigned int c);
int		ft_isalpha(unsigned int c);
int		ft_isdigit(unsigned int c);
int		ft_isalnum(unsigned int c);
int		ft_isascii(unsigned int c);
int		ft_isprint(unsigned int c);
int		ft_toupper(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *s, int c, size_t n);
void	*memset(void *s, int c, size_t n);

#endif
