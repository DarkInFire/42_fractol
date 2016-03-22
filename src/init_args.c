/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_args.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 11:15:27 by jrouzier          #+#    #+#             */
/*   Updated: 2016/03/22 11:15:39 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
#include "libft.h"

t_args	*fol_init_args(void)
{
	t_args	*args;

	if (!(args = (t_args *)malloc(sizeof(t_args))))
		throw_error("Unable to alloc args struct.");
	args->w_list = NULL;
	args->tmp_window = NULL;
	args->pwait = 0;
	return (args);
}
