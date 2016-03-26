/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_window_height.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 11:16:19 by jrouzier          #+#    #+#             */
/*   Updated: 2016/03/22 11:16:30 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
#include "libft.h"

int		arg_window_height(char *p, t_args *args)
{
	int		size;

	if (!(ft_strisdigit(p)))
		throw_error("Window size must be digit only!");
	size = ft_atoi(p);
	if (size < WIN_MIN_HEIGHT)
	{
		size = WIN_MIN_HEIGHT;
		ft_putendl("Window height have been increased.");
	}
	else if (size > 1080)
	{
		size = WIN_MAX_HEIGHT;
		ft_putendl("Window height have been decreased.");
	}
	args->tmp_window->size->y = size;
	return (1);
}
