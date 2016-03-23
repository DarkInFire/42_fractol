/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdebug_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/23 19:24:08 by jrouzier          #+#    #+#             */
/*   Updated: 2016/03/23 19:24:09 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putdebug_fd(int fd, int lvl, int g_lvl, char *s)
{
	if (lvl <= g_lvl)
		ft_putendl_fd(s, fd);
	return (1);
}
