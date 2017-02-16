/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/12 12:02:09 by jobailla          #+#    #+#             */
/*   Updated: 2017/02/16 13:10:11 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Alloue (avec malloc(3)) et retourne une copie de la chaine passée en
** paramètre sans les espaces blancs au debut et à la fin de cette chaine
** On considère comme espaces blancs les caractères ’ ’, ’\n’ et ’\t’
** Si s ne contient pas d’espaces blancs au début ou à la fin, la fonction
** renvoie une copie de s. Si l’allocation echoue, la fonction renvoie NULL.
*/

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t		start;
	size_t		end;

	if (!s)
		return (NULL);
	start = 0;
	end = ft_strlen(s);
	while (ft_isblank_and_newline(s[start]))
		start++;
	while (ft_isblank_and_newline(s[end - 1]))
		end--;
	if (s[start] == '\0')
		return (ft_strdup("\0"));
	else
		return (ft_strsub(s, start, end - start));
}
