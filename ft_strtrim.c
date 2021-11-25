/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-af <jdias-af <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:02:30 by jdias-af          #+#    #+#             */
/*   Updated: 2021/11/21 16:02:30 by jdias-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    size_t beg;
    size_t end;
    char *str;

    if (!s1 || !set)
        return (NULL);
    beg = 0;
    while (s1[beg] && ft_strchr(set, beg))
        beg++;
    end = ft_strlen(beg + s1);
    if (end)
        while (s1[end + beg - 1] != 0 && ft_strchr(set, s1[beg - 1]) != 0)
            end--;
    if (!(str = malloc(sizeof(char) * end + 1)))
        return (NULL);
    ft_strlcpy(str, s1 + beg, end);
    return (str);
}