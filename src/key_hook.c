/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_hook.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/21 14:07:35 by jrouzier          #+#    #+#             */
/*   Updated: 2016/03/22 16:51:37 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static int	key_color(int keycode, t_window *window)
{
	if (keycode == NUM_1)
		window->color = 1;
	else if (keycode == NUM_2)
		window->color = 2;
	else if (keycode == NUM_3)
		window->color = 3;
	else if (keycode == NUM_4)
		window->color = 4;
	else if (keycode == NUM_5)
		window->color = 5;
	return (1);
}

int			fol_key_hook(int keycode, t_window *window)
{
	if (keycode == ECHAP)
		exit_fol((t_args *)window->args);
	else if (keycode == NUM_MINUS)
		window->it -= (window->it > 0) ? 1 : 0;
	else if (keycode == NUM_PLUS)
		window->it++;
	else if (keycode == KEY_UP)
		window->offset->y += (10 * ZOOM);
	else if (keycode == KEY_DOWN)
		window->offset->y -= (10 * ZOOM);
	else if (keycode == KEY_LEFT)
		window->offset->x += (10 * ZOOM);
	else if (keycode == KEY_RIGHT)
		window->offset->x -= (10 * ZOOM);
	else if (keycode == KEY_L)
		window->lock_mouse = (window->lock_mouse) ? 0 : 1;
	else if (keycode == KEY_R)
		fol_reset_window(window);
	key_color(keycode, window);
	fol_reset_display(window);
	return (1);
}
