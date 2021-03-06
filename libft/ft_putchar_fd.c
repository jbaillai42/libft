/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/11 23:25:23 by jobailla          #+#    #+#             */
/*   Updated: 2016/11/20 15:24:13 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Ecrit le caractère c sur le descripteur de fichier fd.
*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
