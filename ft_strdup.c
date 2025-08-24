/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <nolan@student.42>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 21:23:50 by ncorrear          #+#    #+#             */
/*   Updated: 2025/08/24 19:40:49 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
 * @brief Create a copy of the given string
 * 
 * @param s1 string to duplicate
 * @return char* allocated string (NULL if malloc fail)
 */
char	*ft_strdup(const char *s1)
{
	char	*new_str;
	int		i;

	new_str = malloc(ft_strlen(s1) + 1);
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (*s1 != '\0')
		new_str[i++] = *s1++;
	new_str[i] = '\0';
	return (new_str);
}
