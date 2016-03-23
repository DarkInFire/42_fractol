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
	ft_putstr("usage: fractol [ -arg ] fractol_type\n");
	ft_putstr("Open the man with -help\n");
	throw_error(0);
}

void	throw_error(char *s)
{
	if (s != 0)
		ft_putendl(s);
	exit(0);
}
