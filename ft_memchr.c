/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-af <jdias-af <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:20:54 by jdias-af          #+#    #+#             */
/*   Updated: 2021/11/08 14:20:54 by jdias-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char cc;
    unsigned char *sc;

    sc = (unsigned char*)s;
    cc = (unsigned char)c;
    while (n)
    {
        if (*sc == cc)
            return (sc);
        sc++;
        n--;
    }
    return (0);
}