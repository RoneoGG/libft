/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-af <jdias-af@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 15:07:23 by jdias-af          #+#    #+#             */
/*   Updated: 2021/12/18 15:07:23 by jdias-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (*str && *str != '\0')
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if (*str != (char)c)
		return (NULL);
	return ((char *)str);
}
