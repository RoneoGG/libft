/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-af <jdias-af@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 15:08:50 by jdias-af          #+#    #+#             */
/*   Updated: 2021/12/12 15:08:54 by jdias-af         ###   ########.fr       */
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
