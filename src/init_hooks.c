/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_hooks.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/21 14:06:52 by jrouzier          #+#    #+#             */
/*   Updated: 2016/03/21 14:06:55 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
#include "mlx.h"
#include <X11/Xlib.h>

int		fol_init_hooks(t_window *window)
{
	mlx_expose_hook(window->window, fol_expose_hook, window);
	mlx_hook(window->window, 2, 0, fol_key_hook, window);
	mlx_mouse_hook(window->window, fol_mousebutton_hook, window);
	if (window->type == 1)
		mlx_hook(window->window, MotionNotify, PointerMotionMask,
			fol_mousecursor_hook, window);
	return (1);
}
