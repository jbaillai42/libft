/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 14:37:26 by jobailla          #+#    #+#             */
/*   Updated: 2017/02/16 12:55:51 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Prend en paramètre l’adresse d’un pointeur sur un maillon et libère la
** mémoire du contenu de ce maillon avec la fonction del passée en paramètre
**puis libère la mémoire du maillon en lui même avec free(3). La mémoire du
** champ next ne doit en aucun cas être libérée. Pour terminer, le pointeur sur
** le maillon maintenant libéré doit être mis à NULL.
*/

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void*, size_t))
{
	if (alst)
	{
		del((*alst)->content, (*alst)->content_size);
		free(*alst);
		*alst = NULL;
	}
}
