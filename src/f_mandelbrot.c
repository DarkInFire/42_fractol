/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_mandelbrot.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/21 14:06:00 by jrouzier          #+#    #+#             */
/*   Updated: 2016/03/21 14:06:02 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		f_mandelbrot(t_window *window, t_pos *pos)
{
	int		i;
	t_comp	z;
	t_comp	c;
	t_comp	tmp;

	c.x = (((pos->x + window->offset->x) / window->zoom / window->size->x) *
		4 - 2);
	c.y = (((pos->y + window->offset->y) / window->zoom / window->size->y) *
		4 - 2);
	z.x = 0.0;
	z.y = 0.0;
	i = -1;
	while (++i < window->it && (z.x * z.x + z.y * z.y) < 4)
	{
		tmp = z;
		z.x = tmp.x * tmp.x - tmp.y * tmp.y + c.x;
		z.y = tmp.x * tmp.y + tmp.x * tmp.y + c.y;
	}
	return (i);
}
