/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isgraph.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/30 01:42:05 by jobailla          #+#    #+#             */
/*   Updated: 2016/10/05 19:02:13 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Vérifie s'il s'agit d'un caractère imprimable, à l'exception de l'espace.
*/

#include "libft.h"

int		ft_isgraph(int c)
{
	if (c >= 33 && c <= 62)
		return (1);
	return (0);
}
