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

int		f_julia(t_window *window, t_pos *pos, t_comp *z, t_comp *c)
{
	z->x = (((float)(pos->x + window->offset->x) / (float)window->zoom /
		(float)window->size->x) *
		4 - 2);
	z->y = (((float)(pos->y + window->offset->y) / (float)window->zoom /
		(float)window->size->y) *
		4 - 2);
	c->x = ((float)window->mouse_cursor->x / (float)window->size->x) *
		2.0 - 1.0;
	c->y = ((float)window->mouse_cursor->y / (float)window->size->y) *
		2.0 - 1.0;
	return (1);
}
