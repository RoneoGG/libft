/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-af <jdias-af@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 15:04:24 by jdias-af          #+#    #+#             */
/*   Updated: 2021/12/12 15:04:24 by jdias-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest1;
	unsigned char	*src1;
	size_t			i;

	i = 0;
	dest1 = (unsigned char *)dest;
	src1 = (unsigned char *)src;
	if (!dest1 && !src1)
		return (NULL);
	if (dest1 > src1)
	{
		while (n--)
			*(dest1 + n) = *(src1 + n);
	}
	else
		ft_memcpy(dest1, src1, n);
	return (dest);
}
