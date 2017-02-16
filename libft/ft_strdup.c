/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 10:15:19 by jobailla          #+#    #+#             */
/*   Updated: 2017/02/16 13:04:07 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** renvoie un pointeur sur une nouvelle chaîne de caractères qui est dupliquée
** depuis s.
*/

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;

	s2 = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (s2 != NULL)
		ft_strcpy(s2, s1);
	return (s2);
}
