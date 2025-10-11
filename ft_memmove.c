/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <nolan@student.42>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 21:23:42 by ncorrear          #+#    #+#             */
/*   Updated: 2025/10/05 21:45:09 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// TODO : Revoir le concept d'overlap + comment le gerer
/**
 * @brief Copy the source into the destination without overlap
 * 
 * @param dst destination where to copy
 * @param src source to copy
 * @param len size in bytes of the source
 * @return void* pointer of the destination
 */
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst_ptr;
	char	*src_ptr;
	size_t	i;

	dst_ptr = (char *) dst;
	src_ptr = (char *) src;
	if (src_ptr < dst_ptr && src_ptr + len > dst_ptr)
	{
		i = len ;
		while (i > 0)
		{
			i--;
			dst_ptr[i] = src_ptr[i];
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			dst_ptr[i] = src_ptr[i];
			i++;
		}
	}
	return (dst);
}
