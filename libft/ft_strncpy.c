/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 16:46:55 by jobailla          #+#    #+#             */
/*   Updated: 2017/02/16 13:07:44 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Copie les n caractère de la chaîne pointée par src (y compris l'octet nul
** « \0 » final) dans la chaîne pointée par dest. Les deux chaînes ne doivent
** pas se chevaucher. La chaîne dest doit être assez grande pour accueillir
** la copie.
*/

#include "libft.h"

char	*ft_strncpy(char *dest, char *src, size_t n)
{
	size_t i;

	i = 0;
	while (src[i] && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
