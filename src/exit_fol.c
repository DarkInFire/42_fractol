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

static void	destroy_window(t_window *window)
{
	if (window->size)
		free(window->size);
	else if (window->offset)
		free(window->offset);
	else if (window->mouse_cursor)
		free(window->mouse_cursor);
	free(window);
}

void	exit_fol(t_args *args)
{
	if (args->tmp_window)
		destroy_window(args->tmp_window);
	exit(0);
}
