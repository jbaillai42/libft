/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/12 11:59:18 by jobailla          #+#    #+#             */
/*   Updated: 2017/12/04 19:10:56 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Alloue (avec malloc(3)) et retourne la copie “fraiche” d’un tronçon de la
** chaine de caractères passée en paramètre. Le tronçon commence à l’index
** start et à pour longueur n. Si start et n ne désignent pas un tronçon
** de chaine valide, le comportement est indéterminé. Si l’allocation échoue,
** la fonction renvoie NULL.
*/

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t n)
{
	char	*str;
	int		i;

	i = 0;
if (!(str = (char *)ft_memalloc(sizeof(*str) * n + 1)))
		return (NULL);
	if (s)
	{
		while (n--)
			str[i++] = s[start++];
		str[i] = '\0';
		return (str);
	}
	return (NULL);
}
