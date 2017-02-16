/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 14:37:08 by jobailla          #+#    #+#             */
/*   Updated: 2017/02/16 13:07:52 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Compare les n caractère des chaînes s1 et s2. Elle renvoie un entier négatif
** nul, ou positif, si s1 est respectivement inférieure, égale ou supérieure
** à s2.
*/

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
