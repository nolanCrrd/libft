/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <nolan@student.42>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 17:57:13 by ncorrear          #+#    #+#             */
/*   Updated: 2025/09/21 18:00:10 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;
	
	if(*lst == NULL)
		*lst = new;
	else
	{
		current = *lst;
		while(current->next)
			current = current->next;
		current->next = new;
	}
}