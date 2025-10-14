/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 16:53:15 by ncorrear          #+#    #+#             */
/*   Updated: 2025/10/14 19:50:26 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief create a new chained from an original one with editing each content
 * with a function
 * 
 * @param lst list to map
 * @param f editing function
 * @param del function to free all content of one element
 * @return t_list* new list
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*current;

	new_lst = NULL;
	if (lst)
	{
		new_lst = ft_lstnew(f(lst->content));
		current = new_lst;
		while (lst->next)
		{
			current->next = ft_lstnew(f(lst->next->content));
			if (current->next == NULL)
			{
				ft_lstclear(&new_lst, del);
				return (NULL);
			}
			current = current->next;
			lst = lst->next;
		}
	}
	return (new_lst);
}
