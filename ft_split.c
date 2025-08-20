/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <nolan@student.42>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 02:26:24 by ncorrear          #+#    #+#             */
/*   Updated: 2025/08/12 02:26:25 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t count_word(char const *s, char c)
{
	size_t	nb_word;

	if (*s && *s != c)
		nb_word = 1;
	else
		nb_word = 0;
	while (*s && *(s + 1))
	{
		if (*s == c && *(s + 1) != c)
			nb_word++;
		s++;
	}
	return (nb_word);
}

static char **clear(char **strs, size_t j)
{
	if (strs[j--] == NULL)
	{
		while (j >= 0)
			free(strs[j--]);
		free(strs);
		return (NULL);
	}
	return (strs);
}
// TODO : fix le nombre de ligne
char	**ft_split(char const *s, char c)
{
	char	**strs;
	size_t	i;
	size_t	last_word;
	size_t	j;

	strs = malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (strs == NULL)
		return (NULL);
	i = 0;
	last_word = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			if (i != 0 && s[i - 1] != c)
			{
				strs[j++] = ft_substr(s, last_word, i - last_word);
				if (clear(strs, j - 1) == NULL)
					return (NULL);
			}
			last_word = i + 1;
		}
		i++;
	}
	if (i != 0 && s[i - 1] != c)
		strs[j++] = ft_substr(s, last_word, i - last_word);
	if (j != 0 && clear(strs, j - 1) == NULL)
		return (NULL);
	strs[j] = NULL;
	return (strs);
}
