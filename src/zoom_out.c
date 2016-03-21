/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zoom_out.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/21 14:07:04 by jrouzier          #+#    #+#             */
/*   Updated: 2016/03/21 14:08:09 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
#include "libft.h"

void	fol_zoom_out(t_window *window, t_pos *pos)
{
	window->zoom /= ZOOM;
	window->offset->x = window->offset->x / ZOOM -
		((WIDTH - (WIDTH / ZOOM)) / 2) / ZOOM -
		(pos->x - WIDTH / 2) * ZOOM + (pos->x - WIDTH / 2);
	window->offset->y = window->offset->y / ZOOM -
		((HEIGHT - (HEIGHT / ZOOM)) / 2) / ZOOM -
		(pos->y - HEIGHT / 2) * ZOOM + (pos->y - HEIGHT / 2);
}
