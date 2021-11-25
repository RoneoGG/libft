/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-af <jdias-af <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 12:58:54 by jdias-af          #+#    #+#             */
/*   Updated: 2021/11/11 12:58:54 by jdias-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
    int size;

    size = ft_strlen(s);
    while (size >= 0)
    {
        if (s[size] == c)
            return ((char *)s + size);
        size--;
    }
    return (0);
}