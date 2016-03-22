/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_iteration_modify.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 18:15:20 by jrouzier          #+#    #+#             */
/*   Updated: 2016/03/22 18:15:21 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
#include "libft.h"

int		hook_iteration_modify(t_window *window, int keycode)
{
	int		new_itmax;

	if (keycode == NUM_MINUS)
	{
		new_itmax = window->it - 1;
		if (new_itmax < ITE_MIN)
			ft_putendl("You can't reduce the amout of iterations.");
	}
	else
		window->it++;
	return (1);
}
