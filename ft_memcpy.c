/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-af <jdias-af@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 15:04:45 by jdias-af          #+#    #+#             */
/*   Updated: 2021/12/12 15:04:45 by jdias-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *dest1;
    unsigned char *src1;
    size_t i;

    i = 0;
    dest1 = dest;
    src1 = (unsigned char*)src;
    while (i < n)
    {
        dest1[i] = src1[i];
        i++;
    }
    return (dest);
}