/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 21:10:33 by jobailla          #+#    #+#             */
/*   Updated: 2016/08/10 22:46:27 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int i;
	int val;

	i = 0;
	val = 1;
	while (str[i] != '\0' && val == 1)
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')
		|| (str[i] >= 'a' && str[i] <= 'z')))
		{
			val = 0;
		}
		i++;
	}
	return (val);
}
