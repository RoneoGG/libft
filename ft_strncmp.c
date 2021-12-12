/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-af <jdias-af@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 15:09:05 by jdias-af          #+#    #+#             */
/*   Updated: 2021/12/12 15:09:08 by jdias-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' && s2[i] != '\0'))
	{
		if (i >= n)
		{
			return (0);
		}
		i++;
	}
	if (i < n)
	{
		return (s1[i] - s2[i]);
	}
	else
		return (0);
}
/*
#include <stdio.h>
#include<string.h>

int	main(void)
{
	char	s1[] = "0";
	char	s2[] = "0";
	int		i;
	int		j;

	i = 0;
	j = strncmp(s1, s2, 1);
	i = ft_strncmp(s1, s2, 1);
	printf("%d\n", i);
	printf("%d", j);
}
*/
