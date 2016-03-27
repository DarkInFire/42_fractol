/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_sierpinski_carpet.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 14:29:06 by jrouzier          #+#    #+#             */
/*   Updated: 2016/03/22 14:29:24 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
#include "libft.h"

int		f_sierpinski_carpet(t_window *window, t_pos *pos)
{
	int		i;
	t_pos	tmp;

	i = 0;
	tmp.x = (pos->x + window->offset->x) / window->zoom;
	tmp.x = (tmp.x < 0) ? -(tmp.x) : tmp.x;
	tmp.y = (pos->y + window->offset->y) / window->zoom;
	tmp.y = (tmp.y < 0) ? -(tmp.y) : tmp.y;
	while ((tmp.x > 0 || tmp.y > 0) && i < window->it)
	{
		if (tmp.x % 3 == 1 && tmp.y % 3 == 1)
			return (i);
		tmp.x /= 3;
		tmp.y /= 3;
		i++;
	}
	return (window->it);
}
