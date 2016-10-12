/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 20:55:47 by jobailla          #+#    #+#             */
/*   Updated: 2016/10/12 11:36:30 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Calculer la longueur d'une chaîne de caractères */

#include "libft.h"

int		ft_strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
