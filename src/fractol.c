/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/19 20:30:38 by jrouzier          #+#    #+#             */
/*   Updated: 2016/03/20 17:02:18 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
#include "libft.h"
#include "mlx.h"
#include <stdlib.h>

int				fractol(t_args *args)
{
	t_list		*tmp;
	t_window	*window;

	tmp = args->w_list;
	while (tmp)
	{
		window = (t_window *)tmp->content;
		fol_init_hooks(window);
		fol_display(window);
		tmp = tmp->next;
	}
	while (args->nb_windows)
		mlx_loop(args->mlx);
	return (1);
}
