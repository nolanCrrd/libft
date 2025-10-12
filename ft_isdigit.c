/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <nolan@student.42>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 21:23:31 by ncorrear          #+#    #+#             */
/*   Updated: 2025/10/12 17:00:12 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief check if the given int is a digit 0 to 9
 * 
 * @param c char to check
 * @return int boolean
 */
int	ft_isdigit(int c)
{
	return (c <= '9' && c >= '0');
}
