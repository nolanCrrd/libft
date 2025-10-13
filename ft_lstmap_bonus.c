/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 16:53:15 by ncorrear          #+#    #+#             */
/*   Updated: 2025/10/13 13:19:39 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

/**
 * @brief create a new chained from an original one with editing each content
 * with a fucntion
 * 
 * @param lst list to map
 * @param f editing function
 * @param del function to free all content of one element
 * @return t_list* new list
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*current_new;

	new_lst = NULL;
	current_new = new_lst;
	while (lst)
	{
		current_new = ft_lstnew(f(lst->content));
		if (current_new == NULL)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		current_new = current_new->next;
		lst = lst->next;
	}
	return (new_lst);
}
