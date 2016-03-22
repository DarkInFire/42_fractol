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

	window = (t_window *)malloc(sizeof(t_window));
	window->size = ft_getpos(1000, 1000, 0);
	window->type = 0;
	window->zoom = 1;
	window->mouse_cursor = ft_getpos(0, 0, 0);
	window->offset = ft_getpos(0, 0, 0);
	window->it = 42;
	window->lock_mouse = 0;
	window->args = (void *)args;
	window->show_menu = 1;
	window->tech_menu = 0;
	window->color = 1;
	return (window);
}
