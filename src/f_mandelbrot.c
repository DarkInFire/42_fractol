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

int		f_mandelbrot(t_window *window, t_pos *pos, t_comp *z, t_comp *c)
{
	c->x = (((pos->x + window->offset->x) / window->zoom / window->size->x) *
		4 - 2);
	c->y = (((pos->y + window->offset->y) / window->zoom / window->size->y) *
		4 - 2);
	z->x = 0.0;
	z->y = 0.0;
	return (1);
}
