/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 21:24:06 by ncorrear          #+#    #+#             */
/*   Updated: 2025/10/13 13:20:26 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Locate the last occurence of char 'c' int string 's'
 * 
 * @param s string to look at
 * @param c char to find
 * @return char* pointer to the last occurence (NULL if not find)
 */
char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = NULL;
	while (*s != '\0')
	{
		if (*s == c)
			last = (char *) s;
		s++;
	}
	if (c == '\0')
		return ((char *) s);
	return (last);
}
