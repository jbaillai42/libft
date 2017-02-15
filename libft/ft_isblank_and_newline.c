/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isblank_and_newline.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 14:32:24 by jobailla          #+#    #+#             */
/*   Updated: 2016/11/14 14:51:57 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Renvoi une valeur positive si c est une espace, une tabulation ou un 
** retour a la ligne.
*/

#include "libft.h"

int		ft_isblank_and_newline(int c)
{
	if (ft_isblank(c) || c == '\n')
		return (1);
	return (0);
}
