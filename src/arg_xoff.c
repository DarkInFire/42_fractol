/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_xoff.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 12:18:06 by jrouzier          #+#    #+#             */
/*   Updated: 2016/03/22 12:18:09 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
#include "libft.h"

int		arg_xoff(char *p, t_args *args)
{
	int		size;
	int		i;

	i = 0;
	if (!(ft_strisdigit(p)))
		throw_error("Offset modifier must be digit only!");
	size = ft_atoi(p);
	args->tmp_window->offset->x = size;
	return (1);
}
