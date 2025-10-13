/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 21:23:48 by ncorrear          #+#    #+#             */
/*   Updated: 2025/10/13 13:20:09 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Return the first occurence of the char 'c' in the string 's'
 * 
 * @param s string to look at
 * @param c char to find
 * @return char* pointer to the first occurence (NULL if not find)
 */
char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && *s != c)
	{
		s++;
	}
	if (*s == c)
		return ((char *) s);
	return (NULL);
}
