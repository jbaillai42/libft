/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/02 23:41:30 by jobailla          #+#    #+#             */
/*   Updated: 2017/02/16 13:07:14 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ajoute la chaîne s2 à la fin de la chaîne dest en écrasant le caractère nul
** (« \0 ») à la fin de s1, puis en ajoutant un nouveau caractère nul final.
** Les chaînes ne doivent pas se chevaucher, et la chaîne dest doit être assez
** grande pour accueillir le résultat.
*/

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		len;

	i = 0;
	len = ft_strlen(s1);
	while ((s2[i] != '\0') && (i < n))
	{
		s1[len + i] = s2[i];
		i++;
	}
	s1[i + len] = '\0';
	return (s1);
}
