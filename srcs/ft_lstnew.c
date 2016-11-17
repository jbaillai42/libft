/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 15:05:15 by jobailla          #+#    #+#             */
/*   Updated: 2016/11/17 17:49:15 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;
	void	*tmp;

	if (!(new = ft_memalloc(sizeof(content_size)))
	|| (!(tmp = ft_memalloc(sizeof(content)))))
		return (NULL);
	new->content = NULL;
	new->next = NULL;
	new->content_size = 0;
	if (content)
	{
		ft_memcpy(new, content, content_size);
		new->content = tmp;
		new->content_size = content_size;
		new->content_size = 0;
	}
	return (new);
}
