/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 19:02:51 by jrouzier          #+#    #+#             */
/*   Updated: 2016/02/02 12:41:00 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	index;

	index = 0;
	if (*s2 == '\0')
		return ((char *)s1);
	while (*s1 && n > 0)
	{
		while ((s1[index] == s2[index]) && (index < n))
		{
			if ((s2[index + 1] == '\0') || (n - index == 0))
				return ((char *)s1);
			index++;
		}
		index = 0;
		s1++;
		n--;
	}
	return (0);
}
