/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_douady.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/21 14:05:36 by jrouzier          #+#    #+#             */
/*   Updated: 2016/03/21 14:05:40 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		f_douady(t_window *window, t_pos *pos, t_comp *z, t_comp *c)
{
	z->x = (((pos->x + window->offset->x) / window->zoom / window->size->x) *
		4 - 2);
	z->y = (((pos->y + window->offset->y) / window->zoom / window->size->y) *
		4 - 2);
	c->x = -0.123;
	c->y = -0.745;
	return (1);
}
