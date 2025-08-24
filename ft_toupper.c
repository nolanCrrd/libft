/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <nolan@student.42>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 21:24:10 by ncorrear          #+#    #+#             */
/*   Updated: 2025/08/24 19:46:46 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Return the upper char of the given char
 * 
 * @param c char to upper
 * @return int converted char
 */
int	ft_toupper(int c)
{
	return (c - ((c >= 'a' && c <= 'z') * 32));
}
