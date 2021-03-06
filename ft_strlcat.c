/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-af <jdias-af@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 15:08:33 by jdias-af          #+#    #+#             */
/*   Updated: 2021/12/18 15:07:49 by jdias-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	if (dstsize <= ft_strlen(dest))
	{
		return (dstsize + ft_strlen(src));
	}
	i = ft_strlen(dest);
	while (src[j] != '\0' && (i + j + 1 < dstsize))
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (i + ft_strlen(src));
}
