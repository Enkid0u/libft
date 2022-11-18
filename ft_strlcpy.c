/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrebois <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:58:29 by rrebois           #+#    #+#             */
/*   Updated: 2022/11/14 09:17:28 by rrebois          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	while (src[j] != '\0')
		j++;
	if (dstsize < 1)
		return (j);
	while (i < (dstsize - 1) && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (j);
}
/*
#include <string.h>
#include <stdio.h>
int	main ()
{
	char	dst[10]="";
	char	src[]="Hello";

	printf("%lu\n", ft_strlcpy(dst, src, 10));
	printf("%lu\n", strlcpy(dst, src, 10));
	return (0);
}*/
