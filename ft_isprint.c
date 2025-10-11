/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <nolan@student.42>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 21:23:33 by ncorrear          #+#    #+#             */
/*   Updated: 2025/10/05 21:30:27 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief check if the given char is printable between ' ' & '~'
 * 
 * @param c char to check
 * @return int boolean
 */
int	ft_isprint(int c)
{
	return (c >= ' ' && c <= '~');
}
