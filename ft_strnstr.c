/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-af <jdias-af@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 15:09:12 by jdias-af          #+#    #+#             */
/*   Updated: 2021/12/12 15:09:12 by jdias-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *s1, const char *s2, size_t len)
{
    int i;
    int s2_len;

    if (!*s2)
        return ((char *)s1);
    s2_len = ft_strlen(s2);
    while (*s1 && len)
    {
        i = 0;
        while (*s1 && s1[i] == s2[i] && len - i)
        {
            if (i + 1 == s2_len)
                return ((char *)s1);
            i++;
        }
        s1++;
        len--;
    }
    return (0);
}