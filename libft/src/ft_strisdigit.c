/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisdigit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 10:34:54 by jrouzier          #+#    #+#             */
/*   Updated: 2016/03/22 10:34:54 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		ft_strisdigit(char *s)
{
	int		i;

	i = -1;
	while (s[++i] != '\0')
	{
		if (!(ft_isdigit(s[i])) && !(s[i] == '-') && !(s[i] == '+'))
			return (0);
	}
	return (1);
}
