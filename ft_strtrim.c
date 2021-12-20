/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-af <jdias-af@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 15:08:28 by jdias-af          #+#    #+#             */
/*   Updated: 2021/12/18 15:08:28 by jdias-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_beg(char *s, char *set)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(s);
	while (i < len)
	{
		if (ft_strchr(set, s[i]) == 0)
			break ;
		i++;
	}
	return (i);
}

static int	ft_end(char *s, char *set)
{
	int	i;
	int	len;

	len = ft_strlen(s);
	i = 0;
	while (i < len)
	{
		if ((ft_strchr(set, s[len - i - 1])) == 0)
			break ;
		i++;
	}
	return (len - i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		end;
	int		beg;
	char	*strtrimed;

	if (!s1 || !set)
		return (NULL);
	end = ft_end((char *)s1, (char *)set);
	beg = ft_beg((char *)s1, (char *)set);
	if (beg >= end)
		return (ft_strdup(""));
	strtrimed = malloc(sizeof(char) * ((end - beg) + 1));
	if (!strtrimed)
		return (NULL);
	ft_strlcpy(strtrimed, s1 + beg, end - beg + 1);
	return (strtrimed);
}
