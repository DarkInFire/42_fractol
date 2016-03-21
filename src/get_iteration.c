/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fol_get_iteration.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/20 17:03:04 by jrouzier          #+#    #+#             */
/*   Updated: 2016/03/20 17:03:05 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static int	fill_parameters_from_fractal(t_args *args, t_pos *pos,
	t_comp *z, t_comp *c)
{
	if (args->type == 1)
		f_julia(args, pos, z, c);
	else if (args->type == 2)
		f_mandelbrot(args, pos, z, c);
	return (1);
}

int		fol_get_iteration(t_args *args, t_pos *pos)
{
	int		i;
	t_comp	z;
	t_comp	c;
	t_comp	tmp;

	i = 0;
	fill_parameters_from_fractal(args, pos, &z, &c);
	while ((z.x * z.x + z.y * z.y) < 4 && i < args->it)
	{
		tmp = z;
		z.x = tmp.x * tmp.x - tmp.y * tmp.y + c.x;
		z.y = tmp.x * tmp.y + tmp.x * tmp.y + c.y;
		i++;
	}
	return (i);
}
