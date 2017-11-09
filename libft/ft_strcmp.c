/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 12:01:46 by jobailla          #+#    #+#             */
/*   Updated: 2017/11/09 23:24:18 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** compare les deux chaînes s1 et s2. Elle renvoie un entier négatif, nul,
** ou positif, si s1 est respectivement inférieure, égale ou supérieure à s2
*/

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((const unsigned char)*s1 - (const unsigned char)*s2);
}
