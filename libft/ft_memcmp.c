/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 14:52:33 by jobailla          #+#    #+#             */
/*   Updated: 2017/12/04 17:55:26 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** compare les n premiers octets des zones mémoire s1 et s2. Elle renvoie un
** entier inférieur, égal, ou supérieur à zéro, si s1 est respectivement
** inférieure, égale ou supérieur à s2.
*/

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*c1;
	const unsigned char	*c2;

	i = 0;
	c1 = (const unsigned char *)s1;
	c2 = (const unsigned char *)s2;
	while (n--)
	{
		if (c1[i] != c2[i])
			return (c1[i] - c2[i]);
		i++;
	}
	return (0);
}
