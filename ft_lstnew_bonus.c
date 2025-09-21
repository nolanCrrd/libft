/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <nolan@student.42>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 18:28:13 by ncorrear          #+#    #+#             */
/*   Updated: 2025/09/11 18:33:20 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
 * @brief Create an element of a chained list with the given content
 * 
 * @param content value of the element
 * @return t_list* the created element
 */
t_list	*ft_lstnew(void *content)
{
	t_list *new = malloc(sizeof(t_list));
	
	new->content = content;
	new->next = NULL;
	return (new);
}