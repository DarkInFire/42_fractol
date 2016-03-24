/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_fol.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/20 17:02:34 by jrouzier          #+#    #+#             */
/*   Updated: 2016/03/20 17:02:37 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "fractol.h"
#include "mlx.h"
#include "libft.h"

static void	destroy_window(t_window *window)
{
	if (window->size)
		free(window->size);
	if (window->offset)
		free(window->offset);
	if (window->mouse_cursor)
		free(window->mouse_cursor);
	if (window->mlx)
	{
		if (window->img)
			mlx_destroy_image(window->mlx, window->img);
		if (window->window)
			mlx_destroy_window(window->mlx, window->window);
	}
}

void		exit_fol(t_args *args)
{
	t_list		*tmp;
	t_window	*tmpw;

	if (args && args->tmp_window)
	{
		destroy_window(args->tmp_window);
		free(args->tmp_window);
	}
	tmp = args->w_list;
	while (tmp)
	{
		if (tmp->content != NULL)
		{
			tmpw = (t_window *)tmp->content;
			destroy_window(tmpw);
		}
		tmp = tmp->next;
	}
	ft_lstdel(&(args->w_list));
	if (args)
		free(args);
	exit(0);
}
