/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 12:06:15 by jobailla          #+#    #+#             */
/*   Updated: 2017/12/04 18:54:12 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** renvoie un pointeur sur la dernière occurrence du caractère c dans
** la chaîne s.
*/

#include "libft.h"

const	char	*ft_strrchr(const char *s, int c)
{
	size_t		len;

	len = ft_strlen(s) - 1;
	if ((char)c == '\0')
		return ((const char *)s + len + 1);
	else
	{
		while (s[len] && s[len] != (char)c)
			len--;
		if (s[len] == (char)c)
			return ((const char *)s + len);
	}
	return (NULL);
}
