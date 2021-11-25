/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-af <jdias-af <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:21:22 by jdias-af          #+#    #+#             */
/*   Updated: 2021/11/08 14:21:22 by jdias-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    size_t i;
    unsigned char *a;

    i = 0;
    a = b;
    while (i < len)
    {
        a[i] = c;
        i++;
    }
    return (b);
}
/* o 'a' está ligado diretamente ao adress de b (pointer), fazendo com que a alteracao que ocorre em a se dê no 'b' */