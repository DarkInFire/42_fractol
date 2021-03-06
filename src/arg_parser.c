/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_parser.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 11:19:29 by jrouzier          #+#    #+#             */
/*   Updated: 2016/03/22 16:52:09 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
#include "libft.h"
#include "mlx.h"
#include <stdlib.h>
#include <time.h>

static int		get_fractal_type(t_args *args, char *fractal)
{
	time_t	t;

	srand((unsigned)time(&t));
	if (ft_strcmp(fractal, "julia") == 0)
		args->tmp_window->type = 1;
	else if (ft_strcmp(fractal, "mandelbrot") == 0)
		args->tmp_window->type = 2;
	else if (ft_strcmp(fractal, "douady") == 0)
		args->tmp_window->type = 3;
	else if (ft_strcmp(fractal, "sierpinski_carpet") == 0)
		args->tmp_window->type = 4;
	else if (ft_strcmp(fractal, "eye") == 0)
		args->tmp_window->type = 5;
	else if (ft_strcmp(fractal, "oil") == 0)
		args->tmp_window->type = 6;
	else if (ft_strcmp(fractal, "poulpe") == 0)
		args->tmp_window->type = 7;
	else if (ft_strcmp(fractal, "smile") == 0)
		args->tmp_window->type = 8;
	else if (ft_strcmp(fractal, "random") == 0)
		args->tmp_window->type = rand() % 8 + 1;
	else
		fol_putusage("Unknow type of fractol.");
	return (0);
}

static void		read_arg(char *p, t_args *args)
{
	if (!(args->tmp_window))
		args->tmp_window = fol_init_window(args);
	if (p[0] == '-' && !(args->pwait))
		args->pwait = fol_read_argument(p + 1, args);
	else if (args->pwait)
		fol_read_argument(p, args);
	else
	{
		get_fractal_type(args, p);
		fol_add_window_to_list(args);
		args->tmp_window = NULL;
	}
}

t_args			*fol_arg_parser(int nb_params, char **params)
{
	t_args	*args;
	int		i;

	args = fol_init_args();
	i = -1;
	while (++i < nb_params)
		read_arg(params[i + 1], args);
	if (args->pwait)
		fol_putusage("No argument value providen.");
	if (!(args->w_list))
		fol_putusage("No fractal type providen.");
	if (!(args->mlx = mlx_init()))
		throw_error("Unable to initialize mlx.");
	return (args);
}
