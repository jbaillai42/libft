/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/01 00:02:06 by jobailla          #+#    #+#             */
/*   Updated: 2016/10/12 11:28:58 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Écrire des octets de valeur zéro dans un bloc d'octets */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
