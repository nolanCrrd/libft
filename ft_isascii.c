/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <nolan@student.42>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 21:23:29 by ncorrear          #+#    #+#             */
/*   Updated: 2025/08/24 19:13:23 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief check if the given int is an ascii
 * 
 * @param c the int to check
 * @return int boolean
 */
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
