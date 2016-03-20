/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 16:49:14 by jrouzier          #+#    #+#             */
/*   Updated: 2016/02/03 19:30:42 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	char	*s;

	s = dst;
	while (n > 0 && *src != '\0')
	{
		*s++ = *src++;
		n--;
	}
	while (n > 0)
	{
		*s++ = '\0';
		n--;
	}
	return (dst);
}
