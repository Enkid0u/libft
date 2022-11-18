/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrebois <rrebois@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 11:52:17 by rrebois           #+#    #+#             */
/*   Updated: 2022/11/18 13:30:34 by rrebois          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;
	t_list	*buf;

	if (*lst == NULL)
		return ;
	ptr = *lst;
	*lst = NULL;
	while (ptr->next != NULL)
	{
		buf = ptr->next;
		ft_lstdelone(ptr, del);
		ptr = buf;
	}
	ft_lstdelone(ptr, del);
}
