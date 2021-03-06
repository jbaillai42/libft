/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 11:04:09 by jobailla          #+#    #+#             */
/*   Updated: 2016/11/13 14:19:57 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Prend en paramètre l’adresse d’une chaine de caractères qui doit être libérée
** avec free(3) et son pointeur mis à NULL.
*/

#include "libft.h"

void	ft_strdel(char **as)
{
	if (as)
		ft_memdel((void **)as);
}
