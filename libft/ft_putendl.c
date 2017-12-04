/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/12 12:06:33 by jobailla          #+#    #+#             */
/*   Updated: 2017/12/04 18:48:11 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Affiche la chaine s sur la sortie standard suivi d’un ’\n’.
*/

#include "libft.h"

void	ft_putendl(char const *s)
{
	ft_putstr((const char *)s);
	write(1, "\n", 1);
}
