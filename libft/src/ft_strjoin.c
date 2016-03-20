/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 16:35:53 by jrouzier          #+#    #+#             */
/*   Updated: 2015/12/10 22:29:42 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*toalloc;
	int		index;
	int		index2;

	if ((toalloc = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1)) == NULL)
		return (NULL);
	index = 0;
	index2 = 0;
	while (s1[index] != 0)
	{
		toalloc[index] = s1[index];
		index++;
	}
	while (s2[index2] != 0)
		toalloc[index++] = s2[index2++];
	toalloc[index] = 0;
	return (toalloc);
}
