/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_window_width.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 11:16:39 by jrouzier          #+#    #+#             */
/*   Updated: 2016/03/22 11:16:41 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
#include "libft.h"

int		arg_window_width(char *p, t_args *args)
{
	int		size;
	int		i;

	i = 0;
	if (!(ft_strisdigit(p)))
		throw_error("Window size must be digit only!");
	size = ft_atoi(p);
	if (size < WIN_MIN_WIDTH)
	{
		size = WIN_MIN_WIDTH;
		ft_putendl("Window width have been increased.");
	}
	else if (size > WIN_MAX_WIDTH)
	{
		size = WIN_MAX_WIDTH;
		ft_putendl("Window width have been decreased.");
	}
	args->tmp_window->size->x = size;
	return (1);
}
