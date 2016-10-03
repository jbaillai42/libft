/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 00:42:01 by jobailla          #+#    #+#             */
/*   Updated: 2016/09/30 16:45:45 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalnum(int n)
{
	if (((n >= '0' && n <= '9')
	|| (n >= 'A' && n <= 'Z')
	|| (n >= 'a' && n <= 'z')))
		return (1);
	return (0);
}