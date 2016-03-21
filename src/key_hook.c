/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_hook.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/21 14:07:35 by jrouzier          #+#    #+#             */
/*   Updated: 2016/03/21 14:07:37 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		fol_key_hook(int keycode, t_window *window)
{
	if (keycode == 53)
		exit_fol(window->args);
	else if (keycode == 78)
		window->it -= (window->it > 0) ? 1 : 0;
	else if (keycode == 69)
		window->it++;
	else if (keycode == 126)
		window->offset->x -= (10 * ZOOM);
	else if (keycode == 125)
		window->offset->y += (10 * ZOOM);
	else if (keycode == 123)
		window->offset->x -= (10 * ZOOM);
	else if (keycode == 124)
		window->offset->y += (10 * ZOOM);
	else if (keycode == 37)
		window->lock_mouse = (window->lock_mouse) ? 0 : 1;
	fol_reset_display(window);
	return (1);
}
