/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glorza-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 13:25:10 by glorza-p          #+#    #+#             */
/*   Updated: 2025/01/30 15:28:20 by glorza-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *s, char c)
{
	size_t	count;
	size_t	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
		{
			in_word = 0;
		}
		s++;
	}
	return (count);
}

static void	free_split(char **split, size_t index)
{
	while (index--)
		free(split[index]);
	free(split);
}

static const char	*split_string(const char *s, char c, char **st, size_t *i)
{
	size_t	word_len;

	while (*s == c)
		s++;
	word_len = 0;
	while (s[word_len] && s[word_len] != c)
		word_len++;
	if (word_len > 0)
	{
		st[*i] = (char *)malloc((word_len + 1) * sizeof(char));
		if (!st[*i])
		{
			free_split(st, *i);
			return (NULL);
		}
		ft_strlcpy(st[*i], s, word_len + 1);
		(*i)++;
	}
	return (s + word_len);
}

char	**ft_split(const char *s, char c)
{
	char	**split;
	size_t	word_count;
	size_t	index;

	index = 0;
	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	split = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	while (*s)
	{
		s = split_string(s, c, split, &index);
		if (!s)
		{
			free(split);
			return (NULL);
		}
	}
	split[index] = NULL;
	return (split);
}
