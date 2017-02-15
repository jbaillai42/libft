/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 17:54:53 by jobailla          #+#    #+#             */
/*   Updated: 2016/11/06 17:38:04 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Affiche la chaine s sur la sortie standard.
*/

#include "libft.h"

void	ft_putstr(char *str)
{
	if (str)
		write(1, str, ft_strlen(str));
}
