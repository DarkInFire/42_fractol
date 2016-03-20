/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 17:24:29 by jrouzier          #+#    #+#             */
/*   Updated: 2016/02/02 11:31:41 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*buffer;

	if (len == 0 || dst == src)
		return (dst);
	buffer = (char *)malloc(sizeof(buffer) * len);
	ft_memcpy(buffer, src, len);
	ft_memcpy(dst, buffer, len);
	free(buffer);
	return ((void *)dst);
}
