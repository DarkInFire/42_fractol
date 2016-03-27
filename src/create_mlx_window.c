/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_mlx_window.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/20 17:02:22 by jrouzier          #+#    #+#             */
/*   Updated: 2016/03/22 17:53:02 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
#include "mlx.h"

void	fol_create_mlx_window(t_window *window)
{
	if (!(window->window = mlx_new_window(window->mlx, window->size->x,
		window->size->y, "fractol by jrouzier.")))
		throw_error("Unable to initialize window");
}
