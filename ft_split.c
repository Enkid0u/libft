/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrebois <rrebois@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:27:55 by rrebois           #+#    #+#             */
/*   Updated: 2022/11/18 08:14:53 by rrebois          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_copy(char const *s, size_t start, size_t end, char *ptr)
{
	size_t	x;

	x = 0;
	while (x < end - start)
	{
		ptr[x] = *(char *)(s + start + x);
		x++;
	}
	ptr[x] = '\0';
	return (ptr);
}

static char	**ft_cut(char const *s, char c, char **ptr, size_t count)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != c && s[i] != '\0')
			start = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (j < count)
		{
			ptr[j] = (char *)malloc(sizeof(**ptr) * (i - start) + 1);
			if (ptr[j] == NULL)
				return (NULL);
			ptr[j] = ft_copy(s, start, i, ptr[j]);
			j++;
		}
	}
	ptr[j] = 0;
	return (ptr);
}
// si alloc d'un ptr[i] fail, penser a free la chaine et tout les j precedent A FAIRE
char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	count;
	char	**ptr;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != c && s[i] != '\0')
			count++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	ptr = (char **)malloc(sizeof(*ptr) * (count + 1));
	if (ptr == NULL)
		return (NULL);
	ptr = ft_cut(s, c, ptr, count);
	return (ptr);
}
/*
#include <stdio.h>
int	main()
{
	char s[]="   lorem   ipsum dolor     sit amet, consectetur   \
	adipiscing elit. Sed non risus. Suspendisse   ";
	char c = ' ';

	char **ptr;
	ptr = ft_split(s, c);
	size_t i = 0;
	while (i < 12)
	{
		printf("string[%lu]%s\n", i+1,ptr[i]);
		i++;
	}
	return (0);
}*/
