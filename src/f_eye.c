/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_eye.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/28 15:51:56 by jrouzier          #+#    #+#             */
/*   Updated: 2016/03/28 15:51:57 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fractol.h"

int		f_eye(t_window *window, t_pos *pos)
{
	int		i;
	t_comp	z;
	t_comp	c;
	float	x;

	c.x = (((pos->x + window->offset->x) / window->zoom / window->size->x) *
		4 - 2);
	c.y = (((pos->y + window->offset->y) / window->zoom / window->size->y) *
		4 - 2);
	z.x = -0.0984651 +
		((float)window->mouse_cursor->x / (float)window->size->x) * 2.0 - 1.0;
	z.y = -0.45186 +
		((float)window->mouse_cursor->y / (float)window->size->y) * 2.0 - 1.0;
	i = -1;
	while (++i < window->it && (z.x * z.x + z.y * z.y) < 4)
	{
		x = z.x;
		z.x = z.x * z.x * z.x - (3 * z.x * z.y * z.y) + c.x;
		z.y = (3 * x * x * z.y) + c.y;
	}
	return (i);
}
