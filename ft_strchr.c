/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrebois <rrebois@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:52:35 by rrebois           #+#    #+#             */
/*   Updated: 2022/11/21 11:54:12 by rrebois          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = (char *)s;
	while (ptr[i] != '\0')
	{
		if (ptr[i] == (char)c)
			return (&ptr[i]);
		i++;
	}
	if (c == 0 || ptr[i] == (char)c)
		return (&ptr[i]);
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	const char	s[]="teste";
	printf("%s\n", ft_strchr(s, 't'));
	printf("%s\n", strchr(s, 't'));
	return (0);
}*/
