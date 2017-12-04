/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/11 23:28:31 by jobailla          #+#    #+#             */
/*   Updated: 2017/12/04 18:08:41 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Ecrit l’entier n sur le descripteur de fichier fd.
*/

#include "libft.h"

void	ft_putnbr_fd(intmax_t nb, int fd)
{
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putchar_fd(nb % 10 + '0', fd);
	}
	else
		ft_putchar_fd((char)nb + '0', fd);
}
