/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <nolan@student.42>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 21:23:29 by ncorrear          #+#    #+#             */
/*   Updated: 2025/10/12 16:59:57 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief check if the given int is an ascii character
 * 
 * @param c int to check
 * @return int boolean
 */
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
