/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mousebutton_hook.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/21 14:07:24 by jrouzier          #+#    #+#             */
/*   Updated: 2016/03/21 14:07:25 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
#include "libft.h"

int		fol_mousebutton_hook(int button, int x, int y, t_args *args)
{
	if (button == 4)
		fol_zoom_in(ft_getpos(x, y, 0), args);
	else if (button == 5 && args->zoom > 0)
		fol_zoom_out(ft_getpos(x, y, 0), args);
	fol_reset_display(args);
	return (1);
}
