/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_mandelbrot.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/21 14:06:00 by jrouzier          #+#    #+#             */
/*   Updated: 2016/03/21 14:06:02 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		f_mandelbrot(t_args *args, t_pos *pos, t_comp *z, t_comp *c)
{
	c->x = (((pos->x + args->offset->x) / args->zoom / WIDTH) * 4 - 2);
	c->y = (((pos->y + args->offset->y) / args->zoom / HEIGHT) * 4 - 2);
	z->x = 0.0;
	z->y = 0.0;
	return (1);
}
