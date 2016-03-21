/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/19 20:30:38 by jrouzier          #+#    #+#             */
/*   Updated: 2016/03/20 17:02:18 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
#include "libft.h"
#include "mlx.h"
#include <stdlib.h>

static int		get_fractol_id(char *fractal)
{
	if (ft_strcmp(fractal, "julia") == 0)
		return (1);
	else if (ft_strcmp(fractal, "mandelbrot") == 0)
		return (2);
	else if (ft_strcmp(fractal, "douady") == 0)
		return (3);
	fol_putusage("Unknow type of fractol.");
	return (0);
}

static t_args	*init_args(char *type)
{
	t_args	*args;

	args = (t_args *)malloc(sizeof(t_args));
	args->type = get_fractol_id(type);
	if (!(args->mlx = mlx_init()))
		throw_error("Unable to initialize mlx.\n");
	if (!(args->window = mlx_new_window(args->mlx, 1000, 1000,
		ft_strjoin("fractol by jrouzier. Type:", type))))
		throw_error("Unable to initate window.\n");
	args->zoom = 1;
	args->x_offset = 0;
	args->y_offset = 0;
	args->it = 42;
	args->lock_mouse = 0;
	args->mouse_cursor = ft_getpos(0, 0, 0);
	return (args);
}

int				fractol(char *type)
{
	t_args	*args;

	args = init_args(type);
	fol_init_hooks(args);
	fol_display(args);
	mlx_loop(args->mlx);
	return (1);
}
