/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show_help.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 11:15:59 by jrouzier          #+#    #+#             */
/*   Updated: 2016/03/22 11:19:17 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fractol.h"
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

int		fol_show_help(t_args *args)
{
	int		fd;
	char	*s;

	fd = open("man", O_RDONLY);
	if (fd < 0)
		throw_error("Unable to open help file.");
	while ((ft_gnl(fd, &s)) > 0)
		ft_putendl(s);
	close(fd);
	exit_fol(args);
	return (1);
}
