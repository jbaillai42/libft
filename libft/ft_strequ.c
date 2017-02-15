/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/12 11:56:45 by jobailla          #+#    #+#             */
/*   Updated: 2016/11/13 15:35:57 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Compare lexicographiquement s1 et s2. Si les deux chaines sont égales,
** la fonction retourne 1, ou 0 sinon.
*/

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	if (s1 && s2 && !(ft_strcmp(s1, s2)))
		return (1);
	return (0);
}
