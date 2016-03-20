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

void	fol_reset_display(t_args *args)
{
	mlx_destroy_image(args->mlx, args->img);
	fol_display(args);
}

void	fol_display(t_args *args)
{
	args->img = mlx_new_image(args->mlx, WIDTH, HEIGHT);
	args->idata = mlx_get_data_addr(args->img, &(args->ibits),
				&(args->ilinesize), &(args->iendian));
	fol_fractal(args, Z_MAX);
	mlx_put_image_to_window(args->mlx, args->window, args->img, 0, 0);
}
