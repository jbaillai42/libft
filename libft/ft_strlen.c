/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 20:55:47 by jobailla          #+#    #+#             */
/*   Updated: 2016/11/16 01:39:33 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** alcule la longueur de la chaîne de caractères s, sans compter l'octet nul 
** « \0 » final.  
*/

#include "libft.h"

size_t		ft_strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
