/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_argument.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 11:18:17 by jrouzier          #+#    #+#             */
/*   Updated: 2016/03/22 11:19:02 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static int	check_parameter(char *p, t_args *args)
{
	if (args->pwait == 1)
		arg_window_height(p, args);
	else if (args->pwait == 2)
		arg_window_width(p, args);
	else if (args->pwait == 3)
		arg_iterations(p, args);
	else if (args->pwait == 4)
		arg_zoom(p, args);
	else if (args->pwait == 5)
		arg_xoff(p, args);
	else if (args->pwait == 6)
		arg_yoff(p, args);
	args->pwait = 0;
	return (1);
}

int			fol_read_argument(char *a, t_args *args)
{
	if (args->pwait)
		check_parameter(a, args);
	else if (ft_strcmp(a, "wh") == 0)
		return (1);
	else if (ft_strcmp(a, "ww") == 0)
		return (2);
	else if (ft_strcmp(a, "it") == 0)
		return (3);
	else if (ft_strcmp(a, "help") == 0)
		fol_show_help(args);
	else if (ft_strcmp(a, "zoom") == 0)
		return (4);
	else if (ft_strcmp(a, "xoff") == 0)
		return (5);
	else if (ft_strcmp(a, "yoff") == 0)
		return (6);
	else if (ft_strcmp(a, "m_lock") == 0)
		args->tmp_window->lock_mouse = 1;
	else
		fol_putusage("Unknow argument.");
	return (0);
}
