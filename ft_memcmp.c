/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-af <jdias-af <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:21:02 by jdias-af          #+#    #+#             */
/*   Updated: 2021/11/08 14:21:02 by jdias-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *c1;
    unsigned char *c2;
    size_t i;

    i = 0;
    c1 = (unsigned char*)s1;
    c2 = (unsigned char*)s2;
    while (i < n)
    {
        if (c1[i] != c2[i])
            return (c1[i] - c2[i]);
        i++;
    }
    return (0);
}