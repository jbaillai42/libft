/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/12 11:57:45 by jobailla          #+#    #+#             */
/*   Updated: 2016/11/15 19:09:02 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Compare lexicographiquement s1 et s2 jusqu’à n caractères maximum ou bien 
** qu’un ’\0’ ait été rencontré. Si les deux chaines sont égales, la fonction
** retourne 1, ou 0 sinon.
*/

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (s1 && s2 && !(ft_strncmp(s1, s2, n)))
		return (1);
	return (0);
}
