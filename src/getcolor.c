/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getcolor.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/20 17:03:55 by jrouzier          #+#    #+#             */
/*   Updated: 2016/03/20 17:03:56 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
#include <math.h>

int		fol_getcolor(t_args *args, int x, int y)
{
	double	i;
	int		r;
	int		g;
	int		b;

	i = (double)fol_get_iteration(args, x, y) / args->it;
	r = (sin(i * M_PI * 2 - M_PI_2) + 1) / 2 * 255;
	g = (sin(i * M_PI * 4 - M_PI_2) + 1) / 2 * 255;
	b = (sin(i * M_PI * 8 - M_PI_2) + 1) / 2 * 255;
	return (0x10000 * g + 0x100 * b + r);
}
