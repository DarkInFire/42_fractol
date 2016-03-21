/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expose_hook.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/21 14:07:13 by jrouzier          #+#    #+#             */
/*   Updated: 2016/03/21 14:07:14 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		fol_expose_hook(t_window *window)
{
	if (!(window->lock_mouse && window->type == 1))
		fol_reset_display(window);
	return (1);
}
