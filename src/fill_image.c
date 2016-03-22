/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_image.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/21 14:05:20 by jrouzier          #+#    #+#             */
/*   Updated: 2016/03/22 14:29:02 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
#include "mlx.h"
#include "libft.h"

void	fol_fill_image(t_window *window)
{
	int		x;
	int		y;
	t_pos	*pos;

	x = -1;
	pos = ft_getpos(0, 0, 0);
	while (++x <= window->size->x)
	{
		y = -1;
		while (++y <= window->size->y)
		{
			ft_setpos(pos, x, y, 0);
			fol_putpxl_img(window, pos, fol_getcolor(window, pos));
		}
	}
	free(pos);
}
