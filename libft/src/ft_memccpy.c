/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 16:59:40 by jrouzier          #+#    #+#             */
/*   Updated: 2015/12/10 16:53:05 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	index;
	char	*str_dst;
	char	*str_src;

	index = 0;
	str_dst = (char *)dst;
	str_src = (char *)src;
	while (index < n)
	{
		str_dst[index] = str_src[index];
		if ((char)c == str_dst[index])
			return ((void*)&str_dst[index + 1]);
		index++;
	}
	return (NULL);
}
