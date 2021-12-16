/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-af <jdias-af@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 15:08:57 by jdias-af          #+#    #+#             */
/*   Updated: 2021/12/16 17:00:14 by jdias-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*spointer;
	int		i;
	int		len;

	i = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	spointer = malloc(sizeof(char) * (len + 1));
	if (!spointer)
		return (NULL);
	while (s[i] != '\0')
	{
		spointer[i] = f(i, s[i]);
		i++;
	}
	spointer[i] = '\0';
	return (spointer);
}
