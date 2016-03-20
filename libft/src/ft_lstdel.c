/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 13:47:26 by jrouzier          #+#    #+#             */
/*   Updated: 2016/03/19 17:30:49 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst)
{
	t_list	*lst;
	t_list	*nextm;

	lst = *alst;
	while (lst)
	{
		nextm = lst->next;
		free(lst->content);
		free(lst);
		lst = nextm;
	}
	*alst = NULL;
}
