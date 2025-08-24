/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <nolan@student.42>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 21:24:08 by ncorrear          #+#    #+#             */
/*   Updated: 2025/08/24 19:46:09 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief return the given char into lower case
 * 
 * @param c char to convert
 * @return int converted char
 */
int	ft_tolower(int c)
{
	return (c + ((c >= 'A' && c <= 'Z') * 32));
}
