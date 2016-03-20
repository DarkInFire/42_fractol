/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/19 15:08:21 by jrouzier          #+#    #+#             */
/*   Updated: 2016/03/19 20:30:32 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		main(int argc, char **argv)
{
	int		result;

	if (argc != 2)
		fol_putusage("Fractol take 1 argument.");
	else
		fractol(argv[1]);
	return (0);
}
