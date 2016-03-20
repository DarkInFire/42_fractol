/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 17:55:38 by jrouzier          #+#    #+#             */
/*   Updated: 2015/12/10 20:26:36 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		destlen;
	size_t		n;
	char		*cur1;
	const char	*cur2;

	cur1 = dst;
	cur2 = src;
	n = size;
	while (n-- != 0 && *cur1 != '\0')
		cur1++;
	destlen = cur1 - dst;
	n = size - destlen;
	if (n == 0)
		return (destlen + ft_strlen(cur2));
	while (*cur2 != '\0')
	{
		if (n != 1)
		{
			*cur1++ = *cur2;
			n--;
		}
		cur2++;
	}
	*cur1 = '\0';
	return (destlen + (cur2 - src));
}
