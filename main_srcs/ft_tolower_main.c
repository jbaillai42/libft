/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 02:09:06 by jobailla          #+#    #+#             */
/*   Updated: 2016/11/09 13:21:42 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	if (argc == 2)
	{
		ft_putstr(B"ft_tolower = ");
		printf("%d\n", ft_tolower(*argv[i]));
		ft_putstr(G"tolower = ");
		printf("%d\n", tolower(*argv[i]));
	}
	else
		ft_putstr(R"Erreur : Entez un argument.\n");
}