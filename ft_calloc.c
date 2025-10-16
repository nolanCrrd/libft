/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <ncorrear@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 21:23:22 by ncorrear          #+#    #+#             */
/*   Updated: 2025/10/16 13:34:55 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <errno.h>
#include <stdint.h>

/**
 * @brief malloc a memory space of count * size bytes and fill them with zero
 * 
 * @param count number of elements
 * @param size size of each element
 * @return void* pointer to the allocated memory space (NULL if malloc fail)
 */
void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ptr;

	ptr = NULL;
	if (count != 0 && size <= SIZE_MAX / count)
		ptr = malloc(size * count);
	if (ptr == NULL)
	{
		errno = ENOMEM;
		free(ptr);
		return (ptr);
	}
	ft_bzero(ptr, size * count);
	return ((void *) ptr);
}
