/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrebois <rrebois@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:49:27 by rrebois           #+#    #+#             */
/*   Updated: 2022/11/22 12:14:52 by rrebois          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*ptr;
	int		check;

	ptr = NULL;
	i = 0;
	check = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			ptr = (char *)&s[i];
			check++;
		}
		i++;
	}
	if ((char)c == '\0')
	{
		ptr = (char *)&s[i];
		return (ptr);
	}
	if (check > 0)
		return (ptr);
	return (NULL);
}
