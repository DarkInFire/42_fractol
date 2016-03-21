/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/20 17:02:22 by jrouzier          #+#    #+#             */
/*   Updated: 2016/03/20 17:02:29 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
#include "mlx.h"

void	fol_reset_display(t_window *window)
{
	mlx_destroy_image(window->mlx, window->img);
	fol_display(window);
}

void	fol_display(t_window *window)
{
	window->img = mlx_new_image(window->mlx, window->size->x,
		window->size->y);
	window->idata = mlx_get_data_addr(window->img, &(window->ibits),
				&(window->ilinesize), &(window->iendian));
	fol_fill_image(window);
	mlx_put_image_to_window(window->mlx, window->window, window->img,
		0, 0);
}
