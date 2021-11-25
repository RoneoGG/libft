/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-af <jdias-af <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 11:35:04 by jdias-af          #+#    #+#             */
/*   Updated: 2021/11/21 16:25:24 by jdias-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	srclenght;

	i = 0;
	srclenght = ft_strlen(src);
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srclenght);
}
/*
int	main(void)
{
	char			wrd1[] = "Hello there, Venus";
	char			wrd2[] = "aASDADAaa";
	unsigned int	rs;
	//int				r;
	rs = ft_strlcpy(wrd1, wrd2, 14);
	//r = strlcpy(wrd2, wrd1, 0);
	printf("%s", wrd2);
}
*/