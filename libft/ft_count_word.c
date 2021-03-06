/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_word.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 15:03:10 by jobailla          #+#    #+#             */
/*   Updated: 2017/02/16 12:52:37 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Compte le nombre de mots dans la chaine de caractère s en fonction
** du délimiteur c
*/

#include "libft.h"

int		ft_count_word(char const *s, int c)
{
	int nb_word;

	nb_word = 0;
	while (*s)
	{
		if (*s != c && (*(s + 1) == c || *(s + 1) == '\0'))
			nb_word++;
		s++;
	}
	return (nb_word);
}
