/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_julia.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/21 14:05:46 by jrouzier          #+#    #+#             */
/*   Updated: 2016/03/21 14:05:48 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		f_julia(t_window *window, t_pos *pos)
{
	int		i;
	t_comp	z;
	t_comp	c;
	t_comp	tmp;

	z.x = (((float)(pos->x + window->offset->x) / (float)window->zoom /
		(float)window->size->x) * 4 - 2);
	z.y = (((float)(pos->y + window->offset->y) / (float)window->zoom /
		(float)window->size->y) * 4 - 2);
	c.x = ((float)window->mouse_cursor->x / (float)window->size->x) *
		2.0 - 1.0;
	c.y = ((float)window->mouse_cursor->y / (float)window->size->y) *
		2.0 - 1.0;
	i = -1;
	while (++i < window->it && (z.x * z.x + z.y * z.y) < 4)
	{
		tmp = z;
		z.x = tmp.x * tmp.x - tmp.y * tmp.y + c.x;
		z.y = tmp.x * tmp.y + tmp.x * tmp.y + c.y;
	}
	return (i);
}
