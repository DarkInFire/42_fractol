/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_color.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 11:18:01 by jrouzier          #+#    #+#             */
/*   Updated: 2016/03/22 11:18:38 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		arg_color(char *p, t_args *args)
{
	int		c;

	if (!(ft_strisdigit(p)))
		throw_error("Color code is a number!");
	c = ft_atoi(p);
	if (c < 1 || c > 5)
		throw_error("Color code must be a number between 1 and 5 included.");
	args->tmp_window->color = c;
	return (1);
}
