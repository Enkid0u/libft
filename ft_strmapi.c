/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrebois <rrebois@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 10:53:17 by rrebois           #+#    #+#             */
/*   Updated: 2022/11/21 07:57:23 by rrebois          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*ptr;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	ptr = ft_strdup(s);
	if (ptr == NULL)
		return (NULL);
	while (ptr[i] != '\0')
	{
		ptr[i] = f(i, ptr[i]);
		i++;
	}
	return (ptr);
}
/*
char	map_test(unsigned int i, char c)
{
	(void)i;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

int main(int ac, char **av)
{
	(void)ac;
	char	*a;

	char	(*f)(unsigned int, char);

	f = &map_test;
	a = ft_strmapi(av[1], f);
	return (0);
}*/
