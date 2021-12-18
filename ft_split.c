/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-af <jdias-af@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 15:07:12 by jdias-af          #+#    #+#             */
/*   Updated: 2021/12/18 15:07:12 by jdias-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_makesplit(char const *s, char c, char **sstr)
{
	unsigned int	i;
	unsigned int	j;
	int				index;

	i = 0;
	index = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (s[i - 1] != c)
		{
			sstr[index] = (char *)malloc(i - j + 1);
			if (!sstr)
				return (0);
			ft_strlcpy(sstr[index], s + j, i - j + 1);
			index++;
		}
	}
	*(sstr + index) = 0;
	return (sstr);
}

static size_t	word_count(char const *s, char c)
{
	size_t	count;

	if (!s)
		return (0);
	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**sstr;

	sstr = (char **)malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!sstr || !s)
		return (NULL);
	ft_makesplit(s, c, sstr);
	return (sstr);
}
