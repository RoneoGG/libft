/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-af <jdias-af@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 15:07:55 by jdias-af          #+#    #+#             */
/*   Updated: 2021/12/18 15:07:35 by jdias-af         ###   ########.fr       */
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

	str = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!str)
		return (NULL);
	ft_strcpy(str, s1);
	return (str);
}
