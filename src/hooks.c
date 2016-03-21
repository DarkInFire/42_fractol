/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hooks.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/20 17:03:45 by jrouzier          #+#    #+#             */
/*   Updated: 2016/03/20 17:05:06 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		fol_mousecursor_hook(int x, int y, t_args *args)
{
	if (!args->lock_mouse)
	{
		args->jx = ((double)x / (double)WIDTH) * 2.0 - 1.0;
		args->jy = ((double)y / (double)HEIGHT) * 2.0 - 1.0;
		if (x % 5 == 0 || y % 5 == 0)
			fol_reset_display(args);
	}
	return (1);
}
