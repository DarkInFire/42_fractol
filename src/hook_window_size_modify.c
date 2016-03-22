/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_window_size_modify.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 17:52:24 by jrouzier          #+#    #+#             */
/*   Updated: 2016/03/22 17:53:38 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
#include "libft.h"

static int	fail(char *s)
{
	ft_putendl(s);
	return (0);
}

static int	horizontal_change(t_window *window, int direction)
{
	int		new_width;

	if (direction == KEY_F)
	{
		new_width = (double)window->size->x / ZOOM;
		if (new_width < WIN_MIN_WIDTH)
			return (fail("You can't decrease more the window width."));
	}
	else
	{
		new_width = (double)window->size->x * ZOOM;
		if (new_width > WIN_MAX_WIDTH)
			return (fail("You can't increase more the window width."));
	}
	window->size->x = new_width;
	return (1);
}

static int	vertical_change(t_window *window, int direction)
{
	int		new_height;

	if (direction == KEY_V)
	{
		new_height = (double)window->size->y / ZOOM;
		if (new_height < WIN_MIN_HEIGHT)
			return (fail("You can't decrease more the window height."));
	}
	else
	{
		new_height = (double)window->size->y * ZOOM;
		if (new_height > WIN_MAX_HEIGHT)
			return (fail("You can't increase more the window height."));
	}
	window->size->y = new_height;
	return (1);
}

int			hook_window_size_modify(t_window *window, int direction)
{
	int	result;

	if (direction == KEY_F || direction == KEY_G)
		result = horizontal_change(window, direction);
	else
		result = vertical_change(window, direction);
	if (result)
		fol_redraw_window(window);
	return (1);
}
