/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isblank.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/30 01:05:49 by jobailla          #+#    #+#             */
/*   Updated: 2016/11/14 14:57:26 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** vérifie si le caractère est blanc, c'est-à-dire une espace ou une tabulation.
*/

#include "libft.h"

int		ft_isblank(int c)
{
	if (c == '\t' || c == ' ')
		return (1);
	return (0);
}
