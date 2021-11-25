/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-af <jdias-af <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 14:28:32 by jdias-af          #+#    #+#             */
/*   Updated: 2021/11/08 14:40:05 by jdias-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	cont;

	cont = 0;
	while (*str != '\0')
	{
		str++;
		cont++;
	}
	return (cont);
}
/*
int	main(void)
{
	char	*frase;
	int		lol;

	frase = "balelas";
	lol = ft_strlen(frase);
	printf("%d", lol);
}
*/
