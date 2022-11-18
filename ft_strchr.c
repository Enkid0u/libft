/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrebois <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:52:35 by rrebois           #+#    #+#             */
/*   Updated: 2022/11/14 11:32:53 by rrebois          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			s = &s[i];
			return ((char *)s);
		}
		i++;
	}
	if (c == 0)
	{
		s = &s[i];
		return ((char *)s);
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	const char	s[]="42 Hello world!";
	printf("%s\n", ft_strchr(s, '4'));
	printf("%s\n", strchr(s, '4'));
	return (0);
}*/
