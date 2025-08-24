/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <nolan@student.42>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 21:23:33 by ncorrear          #+#    #+#             */
/*   Updated: 2025/08/24 19:14:34 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief check if the given char is printable ' ' - '~'
 * 
 * @param c char to check
 * @return int boolean
 */
int	ft_isprint(int c)
{
	return (c >= ' ' && c <= '~');
}
