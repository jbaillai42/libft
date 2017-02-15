/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 18:33:43 by jobailla          #+#    #+#             */
/*   Updated: 2016/11/20 14:10:38 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Copie len octets depuis la zone mémoire src vers la zone mémoire dest.
** Les deux zones peuvent se chevaucher : la copie se passe comme si les octets 
** de src étaient d'abord copiés dans une zone temporaire qui ne chevauche ni 
**src ni dest, et les octets sont ensuite copiés de la zone temporaire vers dest
*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;

	s = (char *)src;
	d = (char *)dst;
	if (dst < src)
		ft_memcpy(d, s, len);
	else
	{
		while (len--)
			d[len] = s[len];
	}
	return (dst);
}
