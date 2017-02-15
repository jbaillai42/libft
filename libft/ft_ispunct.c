/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ispunct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/30 01:51:37 by jobailla          #+#    #+#             */
/*   Updated: 2016/11/06 15:46:30 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Vérifie s'il s'agit d'un caractère imprimable, qui ne soit ni un espace, 
** ni un caractère alphanumérique.
*/

#include "libft.h"

int		ft_ispunct(int c)
{
	if ((c >= 33 && c <= 47) && (c >= 58 && c <= 64) && (c >= 91 && c <= 96)
	&& (c >= 125 && c <= 126))
		return (1);
	return (0);
}
