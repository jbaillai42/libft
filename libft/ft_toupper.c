/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 00:24:23 by jobailla          #+#    #+#             */
/*   Updated: 2016/12/23 18:55:24 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Convertit la lettre c en majuscule si c'est possible.
*/

#include "libft.h"

int		ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}
