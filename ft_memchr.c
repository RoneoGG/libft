/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-af <jdias-af@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 15:05:39 by jdias-af          #+#    #+#             */
/*   Updated: 2021/12/18 15:05:39 by jdias-af         ###   ########.fr       */
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
