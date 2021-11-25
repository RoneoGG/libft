/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-af <jdias-af <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 13:48:51 by jdias-af          #+#    #+#             */
/*   Updated: 2021/11/21 13:48:51 by jdias-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    char *str;

    if (!(str = malloc(count * size)))
        return (NULL);
    ft_memset(str, 0, count * size);
    return (str);
}
// Calloc allocates in a block of memory small blocks with predetermined size such as int/char.
// using malloc to allocate the memory needed to fullfill as a block and memset to replace the value 
// INSIDE all adress´s as 0 value as calloc does.