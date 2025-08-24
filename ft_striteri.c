/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <nolan@student.42>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 18:23:05 by ncorrear          #+#    #+#             */
/*   Updated: 2025/08/24 19:27:36 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
 * @brief Applied the function 'f' to the string 's'
 * 
 * @param s string to modify
 * @param f modifier
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t			i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
