/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-af <jdias-af <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 18:22:47 by jdias-af          #+#    #+#             */
/*   Updated: 2021/11/21 13:47:35 by jdias-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest [i] = '\0';
	return (dest);
}

char	*ft_strdup(const char *s1)
{
	char	*str;

	if (!(str = ((char*)malloc(sizeof(char) * (ft_strlen(s1) + 1)))))
		return (NULL);
	ft_strcpy(str, s1);
	return (str);
}
/*
#include<stdio.h>
#include<string.h>

int main()
{
    char source[] = "Copia esta";
    // A copy of source is created dynamically
    // and pointer to copy is returned.
    char* target1 = strdup(source);
	char* target2 = ft_strdup(source);
    printf("%s\n", target1);
	printf("%s\n", target2);
    return (0);
}
*/