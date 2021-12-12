/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-af <jdias-af@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 15:09:28 by jdias-af          #+#    #+#             */
/*   Updated: 2021/12/12 15:09:28 by jdias-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static  int is_set(char s, char *set)
{
    int i;

    i = 0;
    while (set[i] != '\0')
    {
        if (set[i] == s)
            return (1);
        i++;
    }
    return (0);
}

static  int ft_end(char *s, char *set)
{
    int i;

    i = ft_strlen(s);
    while (i >= 0)
    {
        if (is_set(s[i], set) == 1)
            i--;
        else
            return (i);
    }
    return (i);
}

static int  ft_beg(char *s, char *set)
{
    int i;

    i = 0;
    while (s[i] != '\0')
    {
        if (is_set(s[i], set) == 1)
            i++;
        else
            return (i);
    }
    return (i);
}

char *ft_strtrim(char const *s1, char const *set)
{
    int     len;
    char    *strtrim;

    if (s1)
    {
        len = (ft_end((char *)s1, (char *)set) - ft_beg((char *)s1, (char *)set));
        if (!s1 || !set)
            return (NULL);
        if (!(strtrim = malloc(sizeof(char) * (len + 1))))
            return (NULL);
        if (strtrim)
        {
            strtrim = ft_substr((char *)s1, ft_beg((char *)s1, (char *)set), len);
            return (strtrim);
        }
    }
    return (NULL);
}