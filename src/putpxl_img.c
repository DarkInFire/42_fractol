/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putpxl_img.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/20 17:02:47 by jrouzier          #+#    #+#             */
/*   Updated: 2016/03/20 17:02:58 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
#include "mlx.h"
#include "libft.h"

void		fol_putpxl_img(t_window *window, t_pos *pos, int color)
{
	unsigned int	value;

	value = mlx_get_color_value(window->mlx, color);
	if (pos->x >= 0 && pos->x < window->size->x && pos->y >= 0 &&
		pos->y < window->size->y)
		ft_memcpy(window->idata + (pos->y * window->ilinesize) +
				(pos->x * (window->ibits / 8)), &value, 3);
}
