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

size_t	char_is_c(char chr, char c)
{
	if (chr == c)
		return (1);
	else
		return (0);
}

static size_t	word_count(char const *s, char c)
{
	size_t	i;
	size_t	word;

	word = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if ((char_is_c(s[i + 1], c) == 1) && (char_is_c(s[i], c) == 0))
			word++;
		i++;
	}
	return (word);
}

static void	*cpy_word(char *dst, char *from, char c)
{
	size_t	i;

	i = 0;
	while (char_is_c(from[i], c) == 0)
	{
		dst[i] = from[i];
		i++;
	}
	dst[i] = '\0';
}

char **ft_split(char const *s, char c)
{
	char	**str;
	size_t	ptr;
	size_t	j;
	
	j = 0;
	ptr = 0;
	while (*s)
	{
		if (char_is_c(s, c) == 0)
			j++;
		str[ptr] = (char *)malloc(sizeof(char) * (j + 1));
		if (!str)
			return (NULL);
		str[ptr] = cpy_word(str[ptr], s, c);
	}
}