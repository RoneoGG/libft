/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-af <jdias-af@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 15:05:28 by jdias-af          #+#    #+#             */
/*   Updated: 2021/12/12 15:05:28 by jdias-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	cc;
	unsigned char	*sc;

	sc = (unsigned char *) s;
	cc = (unsigned char) c;
	while (n)
	{
		if (*sc == cc)
			return (sc);
		sc++;
		n--;
	}
	return (0);
}
