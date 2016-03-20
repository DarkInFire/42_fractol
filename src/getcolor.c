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

int		fol_getcolor(int n, int max, int p)
{
	double	i;
	int		r;
	int		g;
	int		b;

	i = (double)n / max;
	r = (sin(i * M_PI * 2 - M_PI_2) + 1) / 2 * 255;
	g = (sin(i * M_PI * 4 - M_PI_2) + 1) / 2 * 255;
	b = (sin(i * M_PI * 8 - M_PI_2) + 1) / 2 * 255;
	if (p == 0)
		return (0x10000 * r + 0x100 * g + b);
	else if (p == 1)
		return (0x10000 * r + 0x100 * b + g);
	else if (p == 2)
		return (0x10000 * b + 0x100 * r + g);
	else if (p == 3)
		return (0x10000 * b + 0x100 * g + r);
	else if (p == 4)
		return (0x10000 * g + 0x100 * r + b);
	return (0x10000 * g + 0x100 * b + r);
}
