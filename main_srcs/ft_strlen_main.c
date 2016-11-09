/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 16:14:36 by jobailla          #+#    #+#             */
/*   Updated: 2016/11/09 13:27:23 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	while (i < argc)
	{
		printf(B"argc %d = %d\n", i, ft_strlen(argv[i]));
		printf(G"argc %d = %lu\n", i, strlen(argv[i]));
		i++;
		ft_putchar('\n');
	}
	if (argc == 1)
		ft_putstr(R"Erreur : Entez un argument.\n");
}
