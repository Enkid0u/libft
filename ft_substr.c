/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrebois <rrebois@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:23:43 by rrebois           #+#    #+#             */
/*   Updated: 2022/11/21 16:12:57 by rrebois          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	size;
	size_t	i;

	if (s == NULL)
		return (NULL);
	if (len > ft_strlen(s))
		size = ft_strlen(s);
	else
		size = len;
	ptr = (char *)malloc(sizeof(*ptr) * (size + 1));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < size && start <= ft_strlen(s))
	{
		ptr[i] = ((char *)s)[start + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
#include <stdio.h>
int	main()
{
	const char	s[]="";
	char	*a = ft_substr(s, 0, 42000);
	printf("%s\n", a);
	int	i = 0;
	while (a[i])
		i++;
	printf("%d\n", i);
	return (0);
}*/
