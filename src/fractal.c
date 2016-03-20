/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractal.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/20 17:03:04 by jrouzier          #+#    #+#             */
/*   Updated: 2016/03/20 17:03:05 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static int	mandelbrot(t_args *args, int x, int y, int itmax)
{
	int		i;
	t_comp	z;
	t_comp	c;
	t_comp	tmp;

	i = 0;
	c.x = (((x + args->x_offset) / args->zoom / WIDTH) * 4 - 2);
	c.y = (((y + args->y_offset) / args->zoom / HEIGHT) * 4 - 2);
	z.x = 0.0;
	z.y = 0.0;
	while ((z.x * z.x + z.y * z.y) < 4 && i < itmax)
	{
		tmp = z;
		z.x = tmp.x * tmp.x - tmp.y * tmp.y + c.x;
		z.y = tmp.x * tmp.y + tmp.x * tmp.y + c.y;
		i++;
	}
	return (i);
}

static int	julia(t_args *args, int x, int y, int itmax)
{
	int		i;
	t_comp	z;
	t_comp	c;
	t_comp	tmp;

	i = 0;
	z.x = (((x + args->x_offset) / args->zoom / WIDTH) * 4 - 2);
	z.y = (((y + args->y_offset) / args->zoom / HEIGHT) * 4 - 2);
	c.x = args->jx;
	c.y = args->jy;
	while ((z.x * z.x + z.y * z.y) < 4 && i < itmax)
	{
		tmp = z;
		z.x = tmp.x * tmp.x - tmp.y * tmp.y + c.x;
		z.y = tmp.x * tmp.y + tmp.x * tmp.y + c.y;
		i++;
	}
	return (i);
}

static int	douady(t_args *args, int x, int y, int itmax)
{
	int		i;
	t_comp	z;
	t_comp	c;
	t_comp	tmp;

	i = 0;
	z.x = (((x + args->x_offset) / args->zoom / WIDTH) * 4 - 2);
	z.y = (((y + args->y_offset) / args->zoom / HEIGHT) * 4 - 2);
	c.x = -0.123;
	c.y = -0.745;
	while ((z.x * z.x + z.y * z.y) < 4 && i < itmax)
	{
		tmp = z;
		z.x = tmp.x * tmp.x - tmp.y * tmp.y + c.x;
		z.y = tmp.x * tmp.y + tmp.x * tmp.y + c.y;
		i++;
	}
	return (i);
}

void		fol_fractal(t_args *args, int itmax)
{
	int x;
	int y;
	int i;

	x = 0;
	while (x <= WIDTH)
	{
		y = 0;
		while (y <= HEIGHT)
		{
			if (args->type == 1)
				i = julia(args, x, y, itmax);
			else if (args->type == 2)
				i = mandelbrot(args, x, y, itmax);
			else if (args->type == 3)
				i = douady(args, x, y, itmax);
			fol_putpxl_img(args, x, y, fol_getcolor(i, itmax, args->p));
			y += 1;
		}
		x += 1;
	}
}
