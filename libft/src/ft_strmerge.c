/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmerge.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 16:35:53 by jrouzier          #+#    #+#             */
/*   Updated: 2016/01/26 11:47:55 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strmerge(char **s1, char **s2)
{
	char	*buffer;

	if (*s1 == NULL)
		*s1 = *s2;
	else
	{
		buffer = ft_strjoin(*s1, *s2);
		free(*s1);
		free(*s2);
		*s1 = buffer;
	}
}
