/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 18:55:11 by ncorrear          #+#    #+#             */
/*   Updated: 2025/10/20 08:46:28 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
 * @brief Duplicate 'len' char from the given string but only 
 * from the index 'start'
 * 
 * @param s string to duplicate
 * @param start start index of duplication
 * @param len number of char after start
 * @return char* allocated string (NULL if malloc fail)
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			*new;
	size_t			size;

	if (s == NULL)
		return (NULL);
	new = NULL;
	size = ft_strlen(&s[start]);
	if (size < len)
		new = malloc(size + 1);
	else
		new = malloc(len + 1);
	if (len == 0 || new == NULL)
		return (new);
	j = 0;
	i = 0;
	if (s[start + i] != '\0')
	{
		while (s[i] && j < len)
			new[j++] = s[start + i++];
	}
	new[j] = '\0';
	return (new);
}
