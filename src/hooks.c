/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hooks.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/20 17:03:45 by jrouzier          #+#    #+#             */
/*   Updated: 2016/03/20 17:05:06 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		fol_key_hook(int keycode, t_args *args)
{
	if (keycode == 53)
		exit_fol(args);
	fol_reset_display(args);
	return (1);
}

int		fol_mouse_hook(int button, int x, int y, t_args *args)
{
	(void)x;
	(void)y;
	if (button == 4)
	{
		args->zoom *= ZOOM;
		args->x_offset = args->x_offset * ZOOM +
			((WIDTH - (WIDTH / ZOOM)) / 2) * ZOOM +
			(x - WIDTH / 2) * ZOOM - (x - WIDTH / 2);
		args->y_offset = args->y_offset * ZOOM +
			((HEIGHT - (HEIGHT / ZOOM)) / 2) * ZOOM +
			(y - HEIGHT / 2) * ZOOM - (y - HEIGHT / 2);
	}
	else if (button == 5 && args->zoom > 0)
	{
		args->zoom /= ZOOM;
		args->x_offset = args->x_offset / ZOOM -
			((WIDTH - (WIDTH / ZOOM)) / 2) / ZOOM
			- (x - WIDTH / 2) * ZOOM + (x - WIDTH / 2);
		args->y_offset = args->y_offset / ZOOM -
			((HEIGHT - (HEIGHT / ZOOM)) / 2) / ZOOM
			- (y - HEIGHT / 2) * ZOOM + (y - HEIGHT / 2);
	}
	fol_reset_display(args);
	return (1);
}

int		fol_expose_hook(t_args *args)
{
	fol_reset_display(args);
	return (1);
}

int		fol_julia_mouse(int x, int y, t_args *args)
{
	args->jx = ((double)x / (double)WIDTH) * 2.0 - 1.0;
	args->jy = ((double)y / (double)HEIGHT) * 2.0 - 1.0;
	if (x % 5 == 0 || y % 5 == 0)
		fol_reset_display(args);
	return (1);
}
