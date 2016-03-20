/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddlast.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/10 13:27:28 by jrouzier          #+#    #+#             */
/*   Updated: 2016/03/20 17:05:39 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstaddnlast(t_list **list, void const *content, size_t content_size)
{
	t_list	*tmp;

	tmp = *list;
	if (tmp == NULL)
		*list = ft_lstnew(content, content_size);
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = ft_lstnew(content, content_size);
	}
}
