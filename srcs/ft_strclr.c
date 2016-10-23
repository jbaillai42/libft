/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/22 23:51:14 by jobailla          #+#    #+#             */
/*   Updated: 2016/10/23 00:00:09 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Assigne la valeur ’\0’ à tous les caractères de la chaine passée 
	en paramètre. */

#include "libft.h"

void	ft_strclr(char *s)
{
	if (s)
		ft_bzero(s, ft_strlen(s));
}

