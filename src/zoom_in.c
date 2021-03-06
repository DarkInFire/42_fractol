/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zoom_in.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/21 14:06:59 by jrouzier          #+#    #+#             */
/*   Updated: 2016/03/21 14:08:00 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
#include "libft.h"

void	fol_zoom_in(t_window *window, t_pos *pos)
{
	window->zoom *= ZOOM;
	window->offset->x = window->offset->x * ZOOM +
		((window->size->x - (window->size->x / ZOOM)) / 2) * ZOOM +
		(pos->x - window->size->x / 2) * ZOOM - (pos->x - window->size->x / 2);
	window->offset->y = window->offset->y * ZOOM +
		((window->size->y - (window->size->y / ZOOM)) / 2) * ZOOM +
		(pos->y - window->size->y / 2) * ZOOM - (pos->y - window->size->y / 2);
}
