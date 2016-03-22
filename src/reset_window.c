/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reset_window.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 11:17:29 by jrouzier          #+#    #+#             */
/*   Updated: 2016/03/22 11:17:34 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
#include "libft.h"

int		fol_reset_window(t_window *window)
{
	ft_setpos(window->size,1000, 1000, 0);
	ft_setpos(window->mouse_cursor, 0, 0, 0);
	ft_setpos(window->offset, 0, 0, 0);
	window->zoom = 1;
	window->it = 42;
	window->lock_mouse = 0;
	window->show_menu = 1;
	window->tech_menu = 0;
	window->color = 1;
	return (1);
}
