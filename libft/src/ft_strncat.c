/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 18:36:41 by jrouzier          #+#    #+#             */
/*   Updated: 2015/12/10 16:28:43 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	index;
	int		s1_end;

	index = 0;
	while (s1[index])
		index++;
	s1_end = index;
	while (s2[index - s1_end] && index - s1_end < n)
	{
		s1[index] = s2[index - s1_end];
		index++;
	}
	s1[index] = '\0';
	return (s1);
}
