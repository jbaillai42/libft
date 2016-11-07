/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 01:50:37 by jobailla          #+#    #+#             */
/*   Updated: 2016/11/07 16:35:05 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	if (argc == 2)
	{
		ft_putstr("ft_toupper = ");
		ft_putchar(ft_toupper(*argv[i]));
		ft_putchar('\n');
		ft_putstr("toupper = ");
		printf("%c", toupper(*argv[i]));
	}
	else
		ft_putstr("Erreur : entrez un seul agument.\n");
}
