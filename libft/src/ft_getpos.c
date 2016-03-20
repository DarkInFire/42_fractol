/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getpos.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/10 11:35:37 by jrouzier          #+#    #+#             */
/*   Updated: 2016/03/19 17:32:53 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_pos		*ft_getpos(int x, int y, int z)
{
	t_pos	*pos;

	pos = (t_pos *)ft_memalloc(sizeof(t_pos));
	pos->x = x;
	pos->y = y;
	pos->z = z;
	return (pos);
}
