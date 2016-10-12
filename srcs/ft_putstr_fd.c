/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/12 11:17:29 by jobailla          #+#    #+#             */
/*   Updated: 2016/10/12 11:23:26 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Ecrit la chaine s sur le descripteur de fichier fd. */

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	int i;

	i = 0;
	while(s[i] != '\0')
	{
		ft_putchar_fd(s[i++], fd);
	}
}
