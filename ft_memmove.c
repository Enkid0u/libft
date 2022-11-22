/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrebois <rrebois@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:46:32 by rrebois           #+#    #+#             */
/*   Updated: 2022/11/22 12:13:37 by rrebois          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (src < dst)
	{
		while (len > 0)
		{
			*(unsigned char *)(dst + len - 1) = \
			*(unsigned char *)(src + len - 1);
			len--;
		}
	}
	else
	{
		ft_memcpy(dst, src, len);
	}
	return (dst);
}
