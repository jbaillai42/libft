/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/01 00:02:06 by jobailla          #+#    #+#             */
/*   Updated: 2016/11/20 15:51:15 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Met à 0 (octets contenant « \0 ») les n premiers octets du bloc pointé par s.
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
