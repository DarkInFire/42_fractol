/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_window_to_list.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 11:15:48 by jrouzier          #+#    #+#             */
/*   Updated: 2016/03/22 11:15:53 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
#include "libft.h"

int		fol_add_window_to_list(t_args *args)
{
	ft_lstaddnlast(&(args->w_list), (void *)args->tmp_window,
		sizeof(t_window));
	return (1);
}
