/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 12:13:43 by jrouzier          #+#    #+#             */
/*   Updated: 2015/12/10 21:48:24 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*toalloc;
	size_t	index;

	if ((toalloc = (char *)malloc(size)) == NULL)
		return (NULL);
	index = 0;
	while (index < size)
		toalloc[index++] = 0;
	return ((void *)toalloc);
}
