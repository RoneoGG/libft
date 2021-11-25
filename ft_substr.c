/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-af <jdias-af <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 14:24:05 by jdias-af          #+#    #+#             */
/*   Updated: 2021/11/21 14:24:05 by jdias-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *str;
    size_t i;

    i = 0;
    if (!s)
        return (NULL);
    if (start > ft_strlen(s))
        return (ft_strdup(""));
    if (start + len > ft_strlen(s))
        len = ft_strlen(s) - start;
    str = malloc(sizeof(char) * (len + 1));
    str[len] = '\0';
    if (!str)
        return (NULL);
    if (start < ft_strlen(s))
    {
        while (i < len)
            str[i++] = s[start++];
    }
    return (str);
}