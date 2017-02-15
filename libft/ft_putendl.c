/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/12 12:06:33 by jobailla          #+#    #+#             */
/*   Updated: 2016/11/19 11:46:15 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Affiche la chaine s sur la sortie standard suivi d’un ’\n’.
*/

#include "libft.h"

void	ft_putendl(char const *s)
{
	ft_putstr((char *)s);
	write(1, "\n", 1);
}
