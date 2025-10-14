/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 18:28:13 by ncorrear          #+#    #+#             */
/*   Updated: 2025/10/14 12:13:39 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_bonus.h"
#include <stdlib.h>

/**
 * @brief Create an element of a chained list with the given content
 * 
 * @param content value of the element
 * @return t_list* the created element
 */
t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (new == NULL)
		return (new);
	new->content = malloc(8);
	ft_memcpy(new->content, content, 8);
	new->next = NULL;
	return (new);
}
