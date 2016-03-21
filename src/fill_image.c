/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_image.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/21 14:05:20 by jrouzier          #+#    #+#             */
/*   Updated: 2016/03/21 14:05:26 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
#include "mlx.h"
#include "libft.h"

void	fol_fill_image(t_window *window)
{
	int x;
	int y;

	x = -1;
	while (++x <= window->size->x)
	{
		y = -1;
		while (++y <= window->size->y)
			fol_putpxl_img(window, ft_getpos(x, y, 0),
				fol_getcolor(window, ft_getpos(x, y, 0)));
	}
}
