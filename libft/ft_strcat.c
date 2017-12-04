/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 10:32:16 by jobailla          #+#    #+#             */
/*   Updated: 2017/12/04 18:52:26 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Ajoute la chaîne s2 à la fin de la chaîne s1 en écrasant le caractère nul
** (« \0 ») à la fin de s1, puis en ajoutant un nouveau caractère nul final.
** Les chaînes ne doivent pas se chevaucher, et la chaîne dest s1 être assez
** grande pour accueillir le résultat.
*/

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t		i;
	size_t		len;

	i = 0;
	len = ft_strlen(s1);
	while (s2[i])
	{
		s1[i + len] = s2[i];
		i++;
	}
	s1[i + len] = '\0';
	return (s1);
}
