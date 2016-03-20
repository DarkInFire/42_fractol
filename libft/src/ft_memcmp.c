/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 16:15:45 by jrouzier          #+#    #+#             */
/*   Updated: 2016/02/03 20:11:12 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	if ((s1 == NULL && s2 == NULL) || n == 0)
		return (0);
	i = 0;
	while (str1[i] == str2[i] && i <= n)
	{
		i++;
		if (i == n)
			return (0);
	}
	return (str1[i] - str2[i]);
}
