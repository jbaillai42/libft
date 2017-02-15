/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 15:15:55 by jobailla          #+#    #+#             */
/*   Updated: 2016/11/20 14:06:11 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Prend en paramètre l’adresse d’un pointeur sur un maillon et libère la 
** mémoire de ce maillon et celle de tous ses successeurs l’un après l’autre avec 
** del et free(3). Pour terminer, le pointeur sur le premier maillon maintenant 
** libéré doit être mis à NULL (de manière similaire à la fonction ft_memdel de
** la partie obligatoire).
*/

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	if (!(*alst))
		return ;
	ft_lstdel(&(*alst)->next, del);
	del((*alst)->content, (*alst)->content_size);
	free(*alst);
	*alst = NULL;
}
