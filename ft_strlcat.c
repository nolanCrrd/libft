/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <nolan@student.42>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 21:23:52 by ncorrear          #+#    #+#             */
/*   Updated: 2025/08/08 21:23:53 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;

	dst_len = ft_strlen(dst);
	if (dst_len >= dstsize)
		return (dstsize + ft_strlen(src));
	i = dst_len;
	while (i < dstsize - 1 && *src != '\0')
	{
		dst[i] = src[i - dst_len];
		i++;
	}
	if (i < dstsize)
		dst[i] = '\0';
	return (dst_len + ft_strlen(src));
}
