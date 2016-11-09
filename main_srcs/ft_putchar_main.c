/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 15:59:13 by jobailla          #+#    #+#             */
/*   Updated: 2016/11/09 13:49:00 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(B"ft_putchar = ");
		ft_putchar(*argv[i]);
		ft_putchar('\n');
		ft_putstr(G"putchar = ");
		putchar(*argv[i]);
		i++;
	}
	if (argc == 1)
		ft_putstr(R"Erreur: Entrez un argument.\n");
}
