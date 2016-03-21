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
	z->x = (((pos->x + window->offset->x) / window->zoom / WIDTH) * 4 - 2);
	z->y = (((pos->y + window->offset->y) / window->zoom / HEIGHT) * 4 - 2);
	c->x = ((double)window->args->mouse_cursor->x / (double)WIDTH) * 2.0 - 1.0;
	c->y = ((double)window->args->mouse_cursor->y / (double)HEIGHT) * 2.0 - 1.0;
	return (1);
}
