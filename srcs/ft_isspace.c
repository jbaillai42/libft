/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/30 00:57:54 by jobailla          #+#    #+#             */
/*   Updated: 2016/09/30 01:01:41 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isspace(int n)
{
	if (n == '\t' || n == '\n' || n == '\v'
	|| n == '\f' || n == '\r' || n == ' ')
		return (1);
	return (0);
}
