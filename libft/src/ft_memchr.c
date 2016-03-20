/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 16:05:29 by jrouzier          #+#    #+#             */
/*   Updated: 2015/12/10 22:16:21 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	char_c;
	unsigned char	*str_s;
	size_t			index;

	char_c = (unsigned char)c;
	str_s = (unsigned char *)s;
	index = 0;
	while (index < n)
	{
		if (str_s[index] == char_c)
			return ((void *)&str_s[index]);
		index++;
	}
	return (NULL);
}
