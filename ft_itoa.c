/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-af <jdias-af@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 15:05:36 by jdias-af          #+#    #+#             */
/*   Updated: 2021/12/12 18:18:36 by jdias-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(long a)
{
	int	len;

	len = 0;
	if (a == 0)
	{
		len = 1;
		return (len);
	}
	if (a < 0)
	{
		a *= -1;
		len++;
	}
	while (a > 0)
	{
		a /= 10;
		len++;
	}
	return (len);
}

char *ft_itoa(int n)
{
	char	*str;
	long	a;
	int		len;

	a = n;
	len = ft_intlen(a);
	if (!(str = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	str[len--] = '\0';
	if (a == 0)
	{
		str[0] = 48;
		return (str);
	}
	if (a < 0)
	{
		str[0] = '-';
		a *= -1;
	}
	while (a > 0)
	{
		str[len] = 48 + (a % 10);
		a /= 10;
		len--;
	}
	return (str);
}