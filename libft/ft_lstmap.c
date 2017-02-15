/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 17:00:36 by jobailla          #+#    #+#             */
/*   Updated: 2016/11/19 18:54:59 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Parcourt la liste lst en appliquant à chaque maillon la fonction f et crée une 
** nouvelle liste “fraiche” avec malloc(3) ré-sultant des applications successives.
** Si une allocation échoue, la fonction renvoie NULL.
*/

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;

	if (!(new = (t_list*)ft_memalloc(sizeof(t_list))))
		return (NULL);
	if (lst)
	{
		if (!(new = f(lst)))
			return (NULL);
		new->next = ft_lstmap(lst->next, f);
	}
	return (new);
}
