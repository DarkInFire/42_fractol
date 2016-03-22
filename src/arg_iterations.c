/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_iterations.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 11:18:01 by jrouzier          #+#    #+#             */
/*   Updated: 2016/03/22 11:18:38 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		arg_iterations(char *p, t_args *args)
{
	int		it;
	int		i;

	i = 0;
	if (!(ft_strisdigit(p)))
		throw_error("Number of iterations must be digit only!");
	it = ft_atoi(p);
	if (it < 0)
		throw_error("Number of iterations must be superior or equal to zero.");
	args->tmp_window->it = it;
	return (1);
}
