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

static int	get_i_from_base_fractal(t_window *window, t_pos *pos)
{
	int		i;
	t_comp	z;
	t_comp	c;
	t_comp	tmp;

	if (window->type == 1)
		f_julia(window, pos, &z, &c);
	else if (window->type == 2)
		f_mandelbrot(window, pos, &z, &c);
	else if (window->type == 3)
		f_douady(window, pos, &z, &c);
	i = 0;
	while ((z.x * z.x + z.y * z.y) < 4 && i < window->it)
	{
		tmp = z;
		z.x = tmp.x * tmp.x - tmp.y * tmp.y + c.x;
		z.y = tmp.x * tmp.y + tmp.x * tmp.y + c.y;
		i++;
	}
	return (i);
}

int			fol_get_iteration(t_window *window, t_pos *pos)
{
	if (window->type == 1 || window->type == 2 || window->type == 3)
		return (get_i_from_base_fractal(window, pos));
	else if (window->type == 4)
		return (f_sierpinski(window, pos));
	return (0);
}
