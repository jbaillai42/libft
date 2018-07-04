/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/12 12:03:27 by jobailla          #+#    #+#             */
/*   Updated: 2018/07/04 17:15:04 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Alloue (avec malloc(3)) et retourne un tableau de chaines de caractères
** “fraiches” (toutes terminées par un ’\0’, le tableau également donc)
** résultant de la découpe de s selon le caractère c. Si l’allocation echoue,
** la fonction retourne NULL.
*/

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**tab;
	size_t	words;
	size_t	len;
	size_t	i;

	i = 0;
	words = (size_t)ft_count_word(s, c);
	if (!(s))
		return (NULL);
	if (!(tab = (char **)ft_memalloc(sizeof(char *) * (words + 1))))
		return (NULL);
	while (*s && i < words)
	{
		len = 0;
		while (*s == c)
			s++;
		while (*s && *(s + len) != c)
			len++;
		if (!(tab[i++] = ft_strsub(s, 0, len)))
			return (NULL);
		s = s + len;
	}
	tab[i] = NULL;
	return (tab);
}
