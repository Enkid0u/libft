/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrebois <rrebois@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:58:03 by rrebois           #+#    #+#             */
/*   Updated: 2022/11/18 15:58:47 by rrebois          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*buf;

	if (lst == NULL)
		return (NULL);
	new_list = (t_list *)malloc(sizeof(*new_list));
	buf = new_list;
	while (lst->next != NULL)
	{
		new_list->next = ft_lstnew(f(lst->content));
		if (new_list->next == NULL)
			ft_lstclear(&buf, del);
		lst = lst->next;
	}
	new_list->next = ft_lstnew(f(lst->content));
	if (new_list->next == NULL)
		ft_lstclear(&buf, del);
	return (buf);
}
