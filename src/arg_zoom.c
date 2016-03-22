/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_zoom.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 11:18:13 by jrouzier          #+#    #+#             */
/*   Updated: 2016/03/22 11:18:14 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		arg_zoom(char *p, t_args *args)
{
	int		zoom;

	if (!(ft_strisdigit(p)))
		throw_error("Zoom parameter must be digit only!");
	zoom = ft_atoi(p);
	if (zoom <= 0)
		throw_error("Zoom parameter must be superior to zero.");
	args->tmp_window->zoom = zoom;
	return (1);
}
