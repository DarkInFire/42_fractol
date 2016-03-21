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

int		fol_init_hooks(t_args *args)
{
	mlx_expose_hook(args->window, fol_expose_hook, args);
	mlx_key_hook(args->window, fol_key_hook, args);
	mlx_mouse_hook(args->window, fol_mousebutton_hook, args);
	if (args->type == 1)
		mlx_hook(args->window, MotionNotify, PointerMotionMask,
			fol_mousecursor_hook, args);
	return (1);
}
