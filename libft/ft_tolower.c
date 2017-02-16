/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 00:16:17 by jobailla          #+#    #+#             */
/*   Updated: 2017/02/16 13:09:54 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Convertit la lettre c en minuscule si c'est possible.
*/

#include "libft.h"

int		ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}
