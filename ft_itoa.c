/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrebois <rrebois@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 13:11:46 by rrebois           #+#    #+#             */
/*   Updated: 2022/11/17 19:41:01 by rrebois          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_convert(int n, int len, char *ptr)
{
	ptr[len - 1] = '\0';
	if (n < 0)
	{
		n = (unsigned int)n * -1;
		ptr[0] = 45;
		while (len - 2 > 0)
		{
			ptr[len - 2] = (unsigned int)n % 10 + '0';
			n = (unsigned int)n / 10;
			len--;
		}
	}
	else
	{
		while (len - 2 >= 0)
		{
			ptr[len - 2] = n % 10 + '0';
			n = n / 10;
			len --;
		}
	}
	return (ptr);
}

static int	ft_check_len(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		n = (unsigned int)n * -1;
	while ((unsigned int)n > 0)
	{
		n = (unsigned int)n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*ptr;

	len = ft_check_len(n);
	if (n < 0)
		len = len + 2;
	else
		len = len + 1;
	ptr = (char *)malloc(sizeof(*ptr) * (len));
	if (ptr == NULL)
		return (NULL);
	ptr = ft_convert(n, len, ptr);
	return (ptr);
}
/*
#include <stdio.h>
int	main()
{
	int	a = 2147483647;

	printf("string: %s\n", ft_itoa(a));
	return (0);
}*/
