/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <nolan@student.42>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 18:55:11 by ncorrear          #+#    #+#             */
/*   Updated: 2025/08/24 18:55:29 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

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
