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

void		fol_putpxl_img(t_args *args, int x, int y, int color)
{
	char			*data;
	unsigned int	value;

	data = args->idata;
	value = mlx_get_color_value(args->mlx, color);
	if (x >= 0 && x < WIDTH && y >= 0 && y < HEIGHT)
		ft_memcpy(data + (y * args->ilinesize) +
				(x * (args->ibits / 8)), &value, 3);
}
