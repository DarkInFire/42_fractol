/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fol_get_iteration.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/20 17:03:04 by jrouzier          #+#    #+#             */
/*   Updated: 2016/03/21 14:06:49 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int			fol_get_iteration(t_window *window, t_pos *pos)
{
	if (window->type == 1)
		return (f_julia(window, pos));
	else if (window->type == 2)
		return (f_mandelbrot(window, pos));
	else if (window->type == 3)
		return (f_douady(window, pos));
	else if (window->type == 4)
		return (f_sierpinski_carpet(window, pos));
	else if (window->type == 5)
		return (f_dragon(window, pos));
	else if (window->type == 6)
		return (f_oil(window, pos));
	else if (window->type == 7)
		return (f_poulpe(window, pos));
	return (0);
}
