/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-af <jdias-af <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:21:15 by jdias-af          #+#    #+#             */
/*   Updated: 2021/11/08 14:21:15 by jdias-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *dest1;
    unsigned char *src1;

    dest1 = dest;
    src1 = (unsigned char*)src;
    if (dest1 > src1)
    {
        while (n)
        {
            dest1[n] = src1[n];
            n--;
        }
    }
    else
        ft_memcpy(dest1, src1, n);
    return (dest);
}