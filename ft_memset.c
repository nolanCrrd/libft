/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <nolan@student.42>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 18:45:28 by ncorrear          #+#    #+#             */
/*   Updated: 2025/10/05 21:35:55 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Fill a memory space with 'len' value of 'c'
 * 
 * @param b memory space to fill
 * @param c value to use
 * @param len len to fill
 * @return void* pointer of filled memory space
 */
void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	car;
	unsigned char	*ptr;

	car = c;
	ptr = b;
	i = 0;
	while (i < len)
		ptr[i++] = car;
	return (b);
}
