/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 18:51:04 by jobailla          #+#    #+#             */
/*   Updated: 2016/08/16 21:48:27 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src);

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		c;
	char	*str;

	i = 0;
	j = 0;
	c = 0;
	while (c < argc)
	{
		while (argv[j])
		{
			c++;
			j++;
			str = (char*)malloc(sizeof(*str) * (c + 1));
		}
		while (i < argc - 1)
		{
			str = ft_strcat(str, argv[i + 1]);
			i++;
		}
	}
	return (str);
}
