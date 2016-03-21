/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mousecursor_hook.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/21 14:07:31 by jrouzier          #+#    #+#             */
/*   Updated: 2016/03/21 14:08:35 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		fol_mousecursor_hook(int x, int y, t_args *args)
{
	if (!args->lock_mouse)
	{
		ft_setpos(args->mouse_cursor, x, y, 0);
		if ((x % 5 == 0 || y % 5 == 0) && args->type == 1)
			fol_reset_display(args);
	}
	return (1);
}
