/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/20 17:02:42 by jrouzier          #+#    #+#             */
/*   Updated: 2016/03/20 17:19:43 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
#include "libft.h"
#include <stdlib.h>

void	fol_putusage(char *s)
{
	ft_putendl(s);
	ft_putstr("usage:             fractol fractol_type\n");
	ft_putstr("Available Fractol: julia mandelbrot douady\n");
	ft_putstr("Arguments are case-sentitive.\n");
	throw_error(0);
}

void	throw_error(char *s)
{
	if (s != 0)
		ft_putendl(s);
	exit(0);
}
