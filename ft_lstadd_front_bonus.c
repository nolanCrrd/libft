/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <nolan@student.42>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 18:34:03 by ncorrear          #+#    #+#             */
/*   Updated: 2025/10/11 17:41:48 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief add a new chained list at the beginning of the given one
 * 
 * @param lst chained list to edit
 * @param new chained list to add
 */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*tmp;

	tmp = new;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = *lst;
	*lst = new;
}
