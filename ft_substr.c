/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 18:55:11 by ncorrear          #+#    #+#             */
/*   Updated: 2025/10/13 13:20:30 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
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
	char		*substr;
	size_t		reel_len;
	char		is_possible;

	if (s == NULL)
		return (NULL);
	reel_len = 0;
	while (s[reel_len] && reel_len < start)
		reel_len++;
	is_possible = (reel_len == start);
	while (is_possible && s[reel_len] != '\0' && reel_len - start < len)
		reel_len++;
	substr = malloc(sizeof(char) * (is_possible * reel_len + 1));
	if (substr == NULL)
		return (NULL);
	reel_len = 0;
	while (is_possible && s[start + reel_len] != '\0' && reel_len < len)
	{
		substr[reel_len] = s[start + reel_len];
		reel_len++;
	}
	substr[reel_len] = '\0';
	return (substr);
}
