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
	fol_reset_window(window);
	window->args = (void *)args;
	return (window);
}
