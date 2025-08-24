/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <nolan@student.42>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 09:10:45 by ncorrear          #+#    #+#             */
/*   Updated: 2025/08/24 19:40:37 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
 * @brief Create a new string based on 's' with 'f' function applied on each char
 * 
 * @param s original string
 * @param f modifer
 * @return char* modified string (NULL if malloc fail)
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*mapped_str;
	size_t			i;

	mapped_str = malloc(ft_strlen(s) + 1);
	if (mapped_str == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		mapped_str[i] = f(i, s[i]);
		i++;
	}
	mapped_str[i] = '\0';
	return (mapped_str);
}
