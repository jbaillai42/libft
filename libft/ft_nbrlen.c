/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 12:53:16 by jobailla          #+#    #+#             */
/*   Updated: 2016/11/16 01:52:06 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
** Compte le nom de cararètre dans un int.
*/

#include "libft.h"

size_t	ft_nbrlen(int n)
{
	int i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}