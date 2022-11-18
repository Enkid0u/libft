/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrebois <rrebois@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:43:40 by rrebois           #+#    #+#             */
/*   Updated: 2022/11/14 13:40:59 by rrebois          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	leneedle;

	i = 0;
	leneedle = ft_strlen(needle);
	if (leneedle == 0)
		return ((char *)haystack);
	while (i < len && haystack[i] != '\0')
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < len && \
		haystack[i + j] != '\0')
		{
			j++;
			if (j == leneedle)
			{
				haystack = &haystack[i];
				return ((char *)haystack);
			}
		}
		i++;
	}
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>
int	main()
{
	const char	h[]="lorem ipsum dolor sit amet";
	const char	n[]="consectetur";
	printf("%s\n", ft_strnstr(h, n, 30));
	printf("%s\n", strnstr(h, n, 30));
}*/
