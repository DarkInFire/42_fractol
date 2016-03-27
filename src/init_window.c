/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_window.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 11:17:29 by jrouzier          #+#    #+#             */
/*   Updated: 2016/03/22 11:17:34 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
#include "libft.h"

t_window	*fol_init_window(t_args *args)
{
	t_window	*window;

	if ((window = (t_window *)malloc(sizeof(t_window))))
		throw_error("Unable to allocate window struct.");
	window->args = (void *)args;
	window->size = ft_getpos(0, 0, 0);
	window->offset = ft_getpos(0, 0, 0);
	window->mouse_cursor = ft_getpos(0, 0, 0);
	window->img = NULL;
	window->window = NULL;
	window->mlx = NULL;
	fol_reset_window(window);
	return (window);
}
