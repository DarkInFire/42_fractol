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

static t_window	*init_window(t_args *args, char *type)
{
	t_window	*window;

	window = (t_window *)malloc(sizeof(t_window));
	if (!(window->window = mlx_new_window(args->mlx, 1000, 1000,
		ft_strjoin("fractol by jrouzier. Type:", type))))
		throw_error("Unable to initate window.\n");
	window->type = get_fractol_id(type);
	window->zoom = 1;
	window->offset = ft_getpos(0, 0, 0);
	window->it = 42;
	window->lock_mouse = 0;
	window->args = args;
	return (window);
}

static t_args	*init_args(char *type)
{
	t_args	*args;

	args = (t_args *)malloc(sizeof(t_args));
	args->mouse_cursor = ft_getpos(0, 0, 0);
	if (!(args->mlx = mlx_init()))
		throw_error("Unable to initialize mlx.\n");
	args->window = init_window(args, type);
	return (args);
}

int				fractol(char *type)
{
	t_args	*args;

	args = init_args(type);
	fol_init_hooks(args->window);
	fol_display(args->window);
	mlx_loop(args->mlx);
	return (1);
}
