/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 16:51:25 by jrouzier          #+#    #+#             */
/*   Updated: 2015/12/10 22:58:22 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t		index;

	index = 0;
	while (s1[index] != 0 && index < n)
	{
		if (s1[index] != s2[index])
			return (0);
		index++;
	}
	return (1);
}
