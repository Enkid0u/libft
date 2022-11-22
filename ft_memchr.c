/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrebois <rrebois@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:16:53 by rrebois           #+#    #+#             */
/*   Updated: 2022/11/22 12:13:22 by rrebois          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s + i) == (unsigned char)c)
		{
			s = &s[i];
			return ((void *)s);
		}
		i++;
	}
	if (c == 0 && *(unsigned char *)(s + i) == '\0' && i < n)
	{
		s = &s[i];
		return ((void *)s);
	}
	return (NULL);
}
