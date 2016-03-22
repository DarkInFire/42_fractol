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

int		fol_getcolor(t_window *window, t_pos *pos)
{
	double	i;
	int		r;
	int		g;
	int		b;

	i = (double)fol_get_iteration(window, pos) / window->it;
	r = (sin(i * M_PI * 2 - M_PI_2) + 1) / 2 * 255;
	g = (sin(i * M_PI * 4 - M_PI_2) + 1) / 2 * 255;
	b = (sin(i * M_PI * 8 - M_PI_2) + 1) / 2 * 255;
	if (window->color == 1)
		return (0x10000 * g + 0x100 * b + r);	
	else if (window->color == 2)
		return (0x10000 * r + 0x100 * b + g);
	else if (window->color == 3)
		return (0x10000 * b + 0x100 * r + g);
	else if (window->color == 4)
		return (0x10000 * b + 0x100 * g + r);
	else if (window->color == 5)
		return (0x10000 * g + 0x100 * r + b);
	return (0x10000 * g + 0x100 * r + b);
}
