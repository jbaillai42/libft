/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/12 12:06:33 by jobailla          #+#    #+#             */
/*   Updated: 2016/10/23 00:09:28 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Affiche la chaine s sur la sortie standard suivi d’un ’\n’. */

#include "libft.h"

void	ft_putendl(char const *s)
{
	ft_putstr((char *)s);
	ft_putchar('\n');
}
