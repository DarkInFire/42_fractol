/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nstrlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/04 16:35:07 by jrouzier          #+#    #+#             */
/*   Updated: 2016/03/04 16:35:21 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_nstrlen(const char *str, size_t maxlen)
{
	unsigned int	i;

	i = 0;
	while (*str++ && i < (unsigned int)maxlen)
		i++;
	return (i);
}
