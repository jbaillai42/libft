/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 00:42:01 by jobailla          #+#    #+#             */
/*   Updated: 2016/11/16 01:41:47 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Vérifie si l'on a un caractère alphanumérique.
*/

#include "libft.h"

int		ft_isalnum(int c)
{
	if ((ft_isdigit(c) == 1) || (ft_isupper(c) == 1) || (ft_islower(c) == 1))
		return (1);
	return (0);
}
