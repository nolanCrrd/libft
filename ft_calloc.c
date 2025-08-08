/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <nolan@student.42>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 21:23:22 by ncorrear          #+#    #+#             */
/*   Updated: 2025/08/08 21:23:23 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <errno.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t			i;
	size_t			j;
	unsigned char	*ptr;

	i = 0;
	ptr = NULL;
	if (size < SIZE_MAX / count)
		ptr = malloc(size * count);
	if (ptr == NULL)
	{
		errno = ENOMEM;
		return (NULL);
	}
	while (i < count)
	{
		j = 0;
		while (j < size)
			ptr[size * i + j++] = 0;
		i++;
	}
	return ((void *) ptr);
}