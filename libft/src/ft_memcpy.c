/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 14:48:23 by jrouzier          #+#    #+#             */
/*   Updated: 2016/02/02 11:35:31 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*strin;
	char	*strout;

	if (n == 0 || dst == src)
		return (dst);
	strin = (char *)src;
	strout = (char *)dst;
	while (--n)
		*strout++ = *strin++;
	*strout = *strin;
	return (dst);
}
