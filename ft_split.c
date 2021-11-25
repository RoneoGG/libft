/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-af <jdias-af <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:25:53 by jdias-af          #+#    #+#             */
/*   Updated: 2021/11/21 16:25:53 by jdias-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wc(char const *s, char c)
{
	size_t	i;
	size_t	word;

	word = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[0] == c)
			i++;
		else if (s[i] != c)
		{
			while (s[i] != '\0')
			{
				i++;
				if (s[i] == c)
					break;	
			}
			word++;
		}
	}
	return (word);
}



char **ft_split(char const *s, char c)
{
	char	**str;
	size_t			ptr;
	size_t			word_t;
	size_t			i;
	size_t			j;

	ptr = 0;
	i = 0;
	word_t = ft_wc(s, c);
	str = (char **)malloc(sizeof(char*) * (word_t + 1));
	if (!str)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			j = 0;
			while (s[j] != c)
				j++;
			str[ptr++] = ft_substr(s, i, j);
		}
	}
	return ((char **)str);
}